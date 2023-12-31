#ifndef APP_GOF_LOG_LOGGER_HPP
#define APP_GOF_LOG_LOGGER_HPP

#include <log4cplus/logger.h>
#include <log4cplus/loglevel.h>
#include <log4cplus/loggingmacros.h>
#include <log4cplus/configurator.h>
#include <log4cplus/initializer.h>

#include <string>

extern log4cplus::Logger logger_;

#define LOG_TRACE(msg) \
{\
    LOG4CPLUS_TRACE(logger_, msg); \
}
#define LOG_DEBUG(msg) \
{\
    LOG4CPLUS_DEBUG(logger_, msg); \
}
#define LOG_INFO(msg) \
{\
    LOG4CPLUS_INFO(logger_, msg); \
}
#define LOG_WARN(msg) \
{\
    LOG4CPLUS_WARN(logger_, msg); \
}
#define LOG_ERROR(msg) \
{\
    LOG4CPLUS_ERROR(logger_, msg); \
}
#define LOG_FATAL(msg) \
{\
    LOG4CPLUS_FATAL(logger_, msg); \
}

#endif // APP_GOF_LOG_LOGGER_HPP