#include "main_view.h"


int main(int argc, char* argv[])
{
    QGuiApplication app{argc, argv};
    MainView main_view;
    main_view.show();
    return app.exec();
}
