#include <QApplication>
#include <array>
#include <random>
#include "jkqtplotter/jkqtplotter.h"
#include "jkqtplotter/jkqtpgraphs.h"
#include "speedtestplot.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    // 1. create a plotter window and get a pointer to the internal datastore (for convenience)
    SpeedTestPlot plot;

    QTimer::singleShot(500, &plot, SLOT(plotNewData()));

    return app.exec();
}
