///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include "dialog_shim.h"
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/choice.h>
#include <wx/gbsizer.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class DIALOG_GET_FOOTPRINT_BY_NAME_BASE
///////////////////////////////////////////////////////////////////////////////
class DIALOG_GET_FOOTPRINT_BY_NAME_BASE : public DIALOG_SHIM
{
	private:

	protected:
		wxStaticText* m_staticTextRef;
		wxTextCtrl* m_SearchTextCtrl;
		wxStaticText* m_multipleHint;
		wxStaticText* m_staticTextRef1;
		wxChoice* m_choiceFpList;
		wxStdDialogButtonSizer* m_sdbSizer;
		wxButton* m_sdbSizerOK;
		wxButton* m_sdbSizerCancel;

		// Virtual event handlers, override them in your derived class
		virtual void onClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnSearchInputChanged( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSelectFootprint( wxCommandEvent& event ) { event.Skip(); }


	public:

		DIALOG_GET_FOOTPRINT_BY_NAME_BASE( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Get and Move Footprint"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER );

		~DIALOG_GET_FOOTPRINT_BY_NAME_BASE();

};

