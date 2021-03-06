﻿#include "EasyRemoteDesktop.h"
#include <QtWidgets/QApplication>

#include "glog/logging.h"
#pragma comment(lib, "glog.lib")
#pragma comment(lib, "gflags_nothreads_static.lib")

#define APP_NAME "EasyScreenCapture"

int main(int argc, char *argv[])
{
    google::InitGoogleLogging(argv[0]);
    google::SetLogDestination(google::GLOG_INFO, "log_");
    google::SetLogSymlink(google::GLOG_INFO, APP_NAME);
    //FLAGS_alsologtostderr = true;
    QApplication a(argc, argv);
    EasyRemoteDesktop w;
    w.show();
    LOG(INFO) << "Start running...";
    return a.exec();
}
