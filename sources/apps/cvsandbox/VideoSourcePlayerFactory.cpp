/*
    Computer Vision Sandbox

    Copyright (C) 2011-2019, cvsandbox
    http://www.cvsandbox.com/contacts.html

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/

#include <QWidget>
#include "VideoSourcePlayerFactory.hpp"
#include "VideoSourcePlayerQt.hpp"

#ifdef USE_OPEN_GL
#include "VideoSourcePlayerGl.hpp"
#endif

// Hide the decision of which video source player to create
VideoSourcePlayer* VideoSourcePlayerFactory::CreatePlayer( QWidget* parent )
{
    VideoSourcePlayer* player = 0;

    player = new VideoSourcePlayerQt( parent );

    return player;
}
