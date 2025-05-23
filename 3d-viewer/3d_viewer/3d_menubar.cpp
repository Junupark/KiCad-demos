/*
 * This program source code file is part of KiCad, a free EDA CAD application.
 *
 * Copyright (C) 2016 Mario Luzeiro <mrluzeiro@ua.pt>
 * Copyright (C) 2015 Jean-Pierre Charras, jp.charras at wanadoo.fr
 * Copyright (C) 2013 Wayne Stambaugh <stambaughw@gmail.com>
 * Copyright (C) 2023 CERN
 * Copyright The KiCad Developers, see AUTHORS.txt for contributors.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you may find one here:
 * http://www.gnu.org/licenses/old-licenses/gpl-2.0.html
 * or you may search the http://www.gnu.org website for the version 2 license,
 * or you may write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
 */

#include <bitmaps.h>
#include <tool/conditional_menu.h>
#include <eda_3d_viewer_frame.h>
#include <3d_viewer_id.h>
#include <3d_viewer/tools/eda_3d_actions.h>
#include <tool/tool_manager.h>
#include <tool/common_control.h>
#include <widgets/wx_menubar.h>


void EDA_3D_VIEWER_FRAME::doReCreateMenuBar()
{
    wxLogTrace( m_logTrace, wxT( "EDA_3D_VIEWER_FRAME::CreateMenuBar" ) );

    COMMON_CONTROL* tool    = m_toolManager->GetTool<COMMON_CONTROL>();
    wxMenuBar*      oldMenuBar = GetMenuBar();
    WX_MENUBAR*     menuBar = new WX_MENUBAR();


    //-- File menu -----------------------------------------------------------
    //
    ACTION_MENU* fileMenu = new ACTION_MENU( false, tool );

    fileMenu->Add( _( "Export Current View as PNG..." ),
                   wxEmptyString,
                   ID_MENU_SCREENCOPY_PNG,
                   BITMAPS::export_png );

    fileMenu->Add( _( "Export Current View as JPEG..." ),
                   wxEmptyString,
                   ID_MENU_SCREENCOPY_JPEG,
                   BITMAPS::export_file );

    fileMenu->AppendSeparator();
    fileMenu->AddClose( _( "3D Viewer" ) );


    //-- Edit menu -------------------------------------------------------
    // Avoid to translate hotkey modifiers like Ctrl and Shift.
    // The translated modifiers do not always work
    ACTION_MENU* editMenu = new ACTION_MENU( false, tool );

    editMenu->Add( _( "Copy 3D Image" ),
                   wxEmptyString,
                   ID_TOOL_SCREENCOPY_TOCLIBBOARD,
                   BITMAPS::copy );


    //-- View menu -------------------------------------------------------
    //
    ACTION_MENU* viewMenu = new ACTION_MENU( false, tool );

    viewMenu->Add( ACTIONS::zoomInCenter );
    viewMenu->Add( ACTIONS::zoomOutCenter );
    viewMenu->Add( ACTIONS::zoomFitScreen );
    viewMenu->Add( ACTIONS::zoomRedraw );

    // Grid submenu
    ACTION_MENU* gridSubmenu = new ACTION_MENU( false, tool );
    gridSubmenu->SetTitle( _( "3D Grid" ) );
    gridSubmenu->SetIcon( BITMAPS::grid );

    gridSubmenu->Add( EDA_3D_ACTIONS::noGrid,        ACTION_MENU::CHECK);
    gridSubmenu->Add( EDA_3D_ACTIONS::show10mmGrid,  ACTION_MENU::CHECK);
    gridSubmenu->Add( EDA_3D_ACTIONS::show5mmGrid,   ACTION_MENU::CHECK);
    gridSubmenu->Add( EDA_3D_ACTIONS::show2_5mmGrid, ACTION_MENU::CHECK);
    gridSubmenu->Add( EDA_3D_ACTIONS::show1mmGrid,   ACTION_MENU::CHECK);

    viewMenu->AppendSeparator();
    viewMenu->Add( gridSubmenu );

    viewMenu->AppendSeparator();
    viewMenu->Add( EDA_3D_ACTIONS::rotateXCW );
    viewMenu->Add( EDA_3D_ACTIONS::rotateXCCW );

    viewMenu->AppendSeparator();
    viewMenu->Add( EDA_3D_ACTIONS::rotateYCW );
    viewMenu->Add( EDA_3D_ACTIONS::rotateYCCW );

    viewMenu->AppendSeparator();
    viewMenu->Add( EDA_3D_ACTIONS::rotateZCW );
    viewMenu->Add( EDA_3D_ACTIONS::rotateZCCW );

    viewMenu->AppendSeparator();
    viewMenu->Add( EDA_3D_ACTIONS::moveLeft );
    viewMenu->Add( EDA_3D_ACTIONS::moveRight );
    viewMenu->Add( EDA_3D_ACTIONS::moveUp );
    viewMenu->Add( EDA_3D_ACTIONS::moveDown );

    viewMenu->AppendSeparator();
    viewMenu->Add( EDA_3D_ACTIONS::showLayersManager, ACTION_MENU::CHECK );


    //-- Preferences menu -----------------------------------------------
    //
    ACTION_MENU* prefsMenu = new ACTION_MENU( false, tool );

    prefsMenu->Add( _( "Raytracing" ), "",
                    ID_RENDER_CURRENT_VIEW,
                    BITMAPS::tools,
                    ACTION_MENU::CHECK );

    prefsMenu->Add( ACTIONS::openPreferences );

    prefsMenu->Add( _( "Reset to Default Settings" ), ID_MENU3D_RESET_DEFAULTS, BITMAPS::tools );

    prefsMenu->AppendSeparator();
    AddMenuLanguageList( prefsMenu, tool );

    //-- Menubar -------------------------------------------------------------
    //
    menuBar->Append( fileMenu,  _( "&File" ) );
    menuBar->Append( editMenu,  _( "&Edit" ) );
    menuBar->Append( viewMenu,  _( "&View" ) );
    menuBar->Append( prefsMenu, _( "&Preferences" ) );
    AddStandardHelpMenu( menuBar );

    SetMenuBar( menuBar );
    delete oldMenuBar;
}
