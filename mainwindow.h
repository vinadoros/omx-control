#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_connect_clicked();
    void on_pushButton_stop_clicked();
    void on_pushButton_kill_clicked();
    void on_pushButton_pause_clicked();
    void on_pushButton_n30s_pressed();
    void on_pushButton_p30s_pressed();
    void on_pushButton_n10m_pressed();
    void on_pushButton_p10m_pressed();
    void on_lineEdit_dragdropurl_textEdited();

    void on_pushButton_localconnect_clicked();

private:
    Ui::MainWindow *ui;
    QProcess* sshprocess;
    void gencommand_play(QString &commandline);
    void gencommand_localplay(QString &commandline);
    void gencommand_ssh(QString &command, QStringList &sshcommand);
    void sendcommand_ssh(QStringList &command);
    QString genstring_time();
    QString genstring_baseurl();
};

#endif // MAINWINDOW_H
