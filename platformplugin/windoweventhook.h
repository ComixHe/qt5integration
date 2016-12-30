/**
 * Copyright (C) 2016 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/

#ifndef WINDOWEVENTHOOK_H
#define WINDOWEVENTHOOK_H

#include "qxcbwindow.h"

#include "global.h"

DPP_BEGIN_NAMESPACE

class WindowEventHook
{
public:
    WindowEventHook(QXcbWindow *window);

    QXcbWindow *window() const
    { return static_cast<QXcbWindow*>(reinterpret_cast<QXcbWindowEventListener*>(const_cast<WindowEventHook*>(this)));}

    void handleClientMessageEvent(const xcb_client_message_event_t *event);
};

DPP_END_NAMESPACE

#endif // WINDOWEVENTHOOK_H
