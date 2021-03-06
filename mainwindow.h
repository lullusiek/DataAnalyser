#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"


#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void LoadData (QString fileName);

private slots:
    void on_actionOpen_CSV_triggered();

    void on_actionFont_s_style_triggered();

    void on_actionBackground_s_colour_triggered();

    void on_actionFont_s_colour_triggered();

    void on_actionBackground_font_s_colour_triggered();

    void on_actionNight_mode_triggered();

    void on_actionDay_mode_triggered();

    void RefreshDataView();

    void on_actionSave_project_triggered();

    void on_ChooseXColumn_valueChanged(int arg1);

    void on_actionOpen_project_triggered();

    void on_actionSave_project_as_triggered();

    void openRecentCSV();

    void openRecentProject();

    void on_YColumn1_valueChanged(int arg1);

    void on_YColumn2_valueChanged(int arg1);

    void on_YColumn3_valueChanged(int arg1);

    void on_ColourGraph1_clicked();

    void on_ColourGraph2_clicked();

    void on_ColourGraph3_clicked();

    void on_ZoomGraph1_clicked();

    void on_ZoomGraph2_clicked();

    void on_ZoomGraph3_clicked();

    void titleDoubleClick(QMouseEvent* event);

    void axisLabelDoubleClick(QCPAxis *axis, QCPAxis::SelectablePart part);

    void legendDoubleClick(QCPLegend *legend, QCPAbstractLegendItem *item);

    void contextMenuRequest(QPoint pos);

    void on_actionClean_triggered();

    void moveLegend();

    void removeSelectedGraph();

    void removeAllGraphs();

    void graphClicked(QCPAbstractPlottable *plottable, int dataIndex);

private:
    Ui::MainWindow *ui;

    void createCSVMenu();

    void createProjectMenu();

    void loadFile(const QString &filePath);

    void openCSV(QString fileName);

    void openProject(QString fileName);

    void refreshGraph (int index);

    void XColumnFill (int arg1);

    void setGraphColour (int graphIndex);

    void setZoom (int graphIndex);


    void activateIcons();

    void selectionChanged();

    void mousePress();

    void mouseWheel();


};
#endif // MAINWINDOW_H
