#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void SampleDemo(void);
    void SincSatterDemo(void);
    void RealtimeDataDemo(void);
public slots:
    void realtimeDataSlot(void);

private slots:
    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    QTimer dataTimer;
};
#endif // MAINWINDOW_H
