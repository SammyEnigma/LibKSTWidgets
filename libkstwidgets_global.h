#pragma once

#include <QtCore/qglobal.h>

#if defined(LIBKSTWIDGETS_LIBRARY)
#  define LIBKSTWIDGETSSHARED_EXPORT Q_DECL_EXPORT
#else
#  define LIBKSTWIDGETSSHARED_EXPORT Q_DECL_IMPORT
#endif


