#ifndef SWEETLIN_CIA2_212218104168_H
#define SWEETLIN_CIA2_212218104168_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class sweetlin_cia2_212218104168; }
QT_END_NAMESPACE

class sweetlin_cia2_212218104168 : public QMainWindow
{
    Q_OBJECT

public:
    sweetlin_cia2_212218104168(QWidget *parent = nullptr);
    ~sweetlin_cia2_212218104168();

private slots:
    void on_pushButton_toggled(bool checked);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::sweetlin_cia2_212218104168 *ui;
};
#endif // SWEETLIN_CIA2_212218104168_H
