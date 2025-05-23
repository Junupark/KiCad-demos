/*
 * This program source code file is part of KiCad, a free EDA CAD application.
 *
 * Copyright The KiCad Developers, see AUTHORS.txt for contributors.
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PANEL_GERBVIEW_COLOR_SETTINGS_H
#define PANEL_GERBVIEW_COLOR_SETTINGS_H

#include <dialogs/panel_color_settings.h>

class PAGE_INFO;
class FOOTPRINT_PREVIEW_PANEL;
class TITLE_BLOCK;


class PANEL_GERBVIEW_COLOR_SETTINGS : public PANEL_COLOR_SETTINGS
{
public:
    PANEL_GERBVIEW_COLOR_SETTINGS( wxWindow* aParent );

    ~PANEL_GERBVIEW_COLOR_SETTINGS() override;

protected:
    bool TransferDataFromWindow() override;

    bool TransferDataToWindow() override;

    void createSwatches() override;
};


#endif
