#include "mainwindow.h"
#include <QLabel>
#include "engineassembler.h"
#include "bodyassembler.h"
#include "wheelsassembler.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Сборка автомобилей");
    assembleCarButton = new QPushButton("Собрать автомобиль", this);
    engineComboBox = new QComboBox(this);
    bodyComboBox = new QComboBox(this);
    wheelsComboBox = new QComboBox(this);

    engineComboBox->addItem(EngineAssembler::run(Engine::Engine_1_4));
    engineComboBox->addItem(EngineAssembler::run(Engine::Engine_1_6));
    engineComboBox->addItem(EngineAssembler::run(Engine::Engine_2_0));

    bodyComboBox->addItem(BodyAssembler::run(Body::Sedan));
    bodyComboBox->addItem(BodyAssembler::run(Body::Universal));
    bodyComboBox->addItem(BodyAssembler::run(Body::Hatchback));

    wheelsComboBox->addItem(WheelsAssembler::run(Wheel::Size_13));
    wheelsComboBox->addItem(WheelsAssembler::run(Wheel::Size_15));
    wheelsComboBox->addItem(WheelsAssembler::run(Wheel::Size_17));

    connect(assembleCarButton, &QPushButton::clicked, this, &MainWindow::assembleCarClicked);

    QWidget *centralWidget = new QWidget(this);
    QGridLayout *gridLayout = new QGridLayout(centralWidget);

    gridLayout->addWidget(new QLabel("Двигатель:"), 0, 0);
    gridLayout->addWidget(engineComboBox, 0, 1);
    gridLayout->addWidget(new QLabel("Кузов:"), 1, 0);
    gridLayout->addWidget(bodyComboBox, 1, 1);
    gridLayout->addWidget(new QLabel("Размер дисков:"), 2, 0);
    gridLayout->addWidget(wheelsComboBox, 2, 1);
    gridLayout->addWidget(assembleCarButton, 3, 0, 1, 2);

    centralWidget->setLayout(gridLayout);
    setCentralWidget(centralWidget);
    resize(300, 200);
}

MainWindow::~MainWindow()
{
}

void MainWindow::assembleCarClicked()
{
    int engineIndex = engineComboBox->currentIndex();
    int bodyIndex = bodyComboBox->currentIndex();
    int wheelsIndex = wheelsComboBox->currentIndex();

    Engine engine = static_cast<Engine>(engineIndex);
    Body body = static_cast<Body>(bodyIndex);
    Wheel wheel = static_cast<Wheel>(wheelsIndex);

    Car car = CarAssemblyFacade::assembleCar(engine, body, wheel);

    QString message = "Собран " + car.body + " с двигателем " + car.engine + " литра и " + car.wheels + "-м размером колес.";
    QMessageBox::information(this, "Результат сборки", message);
}
