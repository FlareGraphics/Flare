#pragma once

/**
 * Useful macros and inline functions used for logging and/or debugging
 * during development.
 * It is not accessible through the public interface of the library.
 */

#include <iostream>
#include <sstream>
#include <string>

#define FLARE_DEBUG_PRINT_STREAM std::cout
#define FLARE_DEBUG_ERROR_STREAM std::cerr

#ifdef FLARE_DEBUG_ENABLED

/* If a message needs to be empty. */
#define EMPTY ""

/* Add file name, line and function name to the message text. */
#define FLARE_PRETTY_PRINT \
    "In " << __FILE__ << ":" << __LINE__ << " (" << __func__ << ") : "

/* Print a message (pretty printed) in the FLARE_DEBUG_PRINT_STREAM. */
#define FLARE_DEBUG_PRINT(message) \
    FLARE_DEBUG_PRINT_STREAM << FLARE_PRETTY_PRINT << message << "\n"

/* Print a message (pretty printed) in the FLARE_DEBUG_ERROR_STREAM. */
#define FLARE_DEBUG_ERROR(message) \
    FLARE_DEBUG_ERROR_STREAM << FLARE_PRETTY_PRINT << message << "\n"

/* Throw an exception with the given what(). */
#define FLARE_DEBUG_THROW(message) \
    do { \
        FLARE_DEBUG_ERROR("[EXCEPTION] " << message); \
        throw NULL; \
    } while(false)

#else

/* Empty definition of the macros above in case debugging is not enabled. */
#define FLARE_PRETTY_PRINT
#define FLARE_DEBUG_PRINT(message)
#define FLARE_DEBUG_ERROR(message)
#define FLARE_DEBUG_THROW(message)

#endif