//
//  UncaughtExceptionLogger.h
//  BackgroundGeolocation
//
//  Created by Marian Hello on 11/04/2018.
//  Copyright © 2018 mauron85. All rights reserved.
//

#ifndef UncaughtExceptionLogger_h
#define UncaughtExceptionLogger_h

typedef struct
{
    void (*setEnabled)(bool isEnabled);
    bool (*isEnabled)(void);
} MAHUncaughtExceptionLogger;

MAHUncaughtExceptionLogger* mah_get_uncaught_exception_logger(void);

#endif /* UncaughtExceptionLogger_h */
