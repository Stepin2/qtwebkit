/*
 * Copyright (C) 2010, 2011 Nokia Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "PluginProcessMain.h"

#if ENABLE(PLUGIN_PROCESS)

#include "CommandLine.h"
#include "PluginProcess.h"
#include <WebCore/NotImplemented.h>
#include <WebCore/RunLoop.h>
#include <runtime/InitializeThreading.h>
#include <wtf/MainThread.h>
#include <wtf/RetainPtr.h>
#include <wtf/text/CString.h>
#include <wtf/text/WTFString.h>

#define SHOW_CRASH_REPORTER 1

using namespace WebCore;

namespace WebKit {

int PluginProcessMain(const CommandLine& commandLine)
{
    String serviceName = commandLine["servicename"];
    if (serviceName.isEmpty())
        return EXIT_FAILURE;

#if !SHOW_CRASH_REPORTER
    // Installs signal handlers that exit on a crash so that CrashReporter does not show up.
    signal(SIGILL, _exit);
    signal(SIGFPE, _exit);
    signal(SIGBUS, _exit);
    signal(SIGSEGV, _exit);
#endif

    JSC::initializeThreading();
    WTF::initializeMainThread();
    RunLoop::initializeMainRunLoop();

    RunLoop::run();

    return 0;
}

}

#endif // ENABLE(PLUGIN_PROCESS)