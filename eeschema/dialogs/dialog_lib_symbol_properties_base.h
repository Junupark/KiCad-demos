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
class STD_BITMAP_BUTTON;
class WX_GRID;

#include "dialog_shim.h"
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/font.h>
#include <wx/grid.h>
#include <wx/gdicmn.h>
#include <wx/bmpbuttn.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/combobox.h>
#include <wx/spinctrl.h>
#include <wx/checkbox.h>
#include <wx/panel.h>
#include <wx/listbox.h>
#include <wx/notebook.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

#define ID_LIBEDIT_NOTEBOOK 6000

///////////////////////////////////////////////////////////////////////////////
/// Class DIALOG_LIB_SYMBOL_PROPERTIES_BASE
///////////////////////////////////////////////////////////////////////////////
class DIALOG_LIB_SYMBOL_PROPERTIES_BASE : public DIALOG_SHIM
{
	private:

	protected:
		wxNotebook* m_NoteBook;
		wxPanel* m_PanelBasic;
		WX_GRID* m_grid;
		wxBoxSizer* bButtonSize;
		STD_BITMAP_BUTTON* m_bpAdd;
		STD_BITMAP_BUTTON* m_bpMoveUp;
		STD_BITMAP_BUTTON* m_bpMoveDown;
		STD_BITMAP_BUTTON* m_bpDelete;
		wxTextCtrl* m_SymbolNameCtrl;
		wxStaticText* staticKeywordsLabel;
		wxTextCtrl* m_KeywordCtrl;
		wxStaticText* m_inheritsStaticText;
		wxComboBox* m_inheritanceSelectCombo;
		wxBoxSizer* bSizerLowerBasicPanel;
		wxStaticText* m_staticTextNbUnits;
		wxSpinCtrl* m_SelNumberOfUnits;
		wxCheckBox* m_OptionPartsInterchangeable;
		wxCheckBox* m_hasAlternateBodyStyles;
		wxCheckBox* m_OptionPower;
		wxCheckBox* m_ShowPinNumButt;
		wxCheckBox* m_ShowPinNameButt;
		wxCheckBox* m_PinsNameInsideButt;
		wxStaticText* m_nameOffsetLabel;
		wxTextCtrl* m_nameOffsetCtrl;
		wxStaticText* m_nameOffsetUnits;
		wxCheckBox* m_excludeFromSimCheckBox;
		wxCheckBox* m_excludeFromBomCheckBox;
		wxCheckBox* m_excludeFromBoardCheckBox;
		wxPanel* m_PanelFootprintFilter;
		wxStaticText* m_staticTextFootprints;
		wxListBox* m_FootprintFilterListBox;
		STD_BITMAP_BUTTON* m_addFilterButton;
		STD_BITMAP_BUTTON* m_editFilterButton;
		STD_BITMAP_BUTTON* m_deleteFilterButton;
		wxButton* m_spiceFieldsButton;
		wxStdDialogButtonSizer* m_stdSizerButton;
		wxButton* m_stdSizerButtonOK;
		wxButton* m_stdSizerButtonCancel;

		// Virtual event handlers, override them in your derived class
		virtual void OnUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void OnPageChanging( wxNotebookEvent& event ) { event.Skip(); }
		virtual void OnSizeGrid( wxSizeEvent& event ) { event.Skip(); }
		virtual void OnAddField( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMoveUp( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMoveDown( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDeleteField( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSymbolNameKillFocus( wxFocusEvent& event ) { event.Skip(); }
		virtual void OnSymbolNameText( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCombobox( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSpinCtrl( wxSpinEvent& event ) { event.Skip(); }
		virtual void OnSpinCtrlText( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void onPowerCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnFpFilterDClick( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnEditFootprintFilter( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAddFootprintFilter( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnEditSpiceModel( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCancelButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		DIALOG_LIB_SYMBOL_PROPERTIES_BASE( wxWindow* parent, wxWindowID id = ID_LIBEDIT_NOTEBOOK, const wxString& title = _("Library Symbol Properties"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER );

		~DIALOG_LIB_SYMBOL_PROPERTIES_BASE();

};

