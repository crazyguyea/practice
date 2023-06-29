#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QComboBox>
#include <QMessageBox>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void assembleCarClicked();

private:
    QPushButton *assembleCarButton;
    QComboBox *engineComboBox;
    QComboBox *bodyComboBox;
    QComboBox *wheelsComboBox;
};

#endif // MAINWINDOW_H
