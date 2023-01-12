/***************************************************************
 * Name:      PopUpAnnulationDeReservationMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-12
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "PopUpAnnulationDeReservationMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(PopUpAnnulationDeReservationFrame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(PopUpAnnulationDeReservationFrame)
const long PopUpAnnulationDeReservationFrame::ID_STATICBITMAP1 = wxNewId();
const long PopUpAnnulationDeReservationFrame::ID_STATICTEXT1 = wxNewId();
const long PopUpAnnulationDeReservationFrame::ID_TOGGLEBUTTON1 = wxNewId();
const long PopUpAnnulationDeReservationFrame::ID_TOGGLEBUTTON2 = wxNewId();
const long PopUpAnnulationDeReservationFrame::ID_MENUITEM1 = wxNewId();
const long PopUpAnnulationDeReservationFrame::idMenuAbout = wxNewId();
const long PopUpAnnulationDeReservationFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(PopUpAnnulationDeReservationFrame,wxFrame)
    //(*EventTable(PopUpAnnulationDeReservationFrame)
    //*)
END_EVENT_TABLE()

PopUpAnnulationDeReservationFrame::PopUpAnnulationDeReservationFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(PopUpAnnulationDeReservationFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(500,232));
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxNullBitmap, wxPoint(216,152), wxSize(500,250), 0, _T("ID_STATICBITMAP1"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("\n\n  Confirmez-vous cette annulation \?"), wxPoint(72,32), wxSize(328,72), 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(13,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_LIGHT,false,_T("URW Bookman"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    ToggleButton1 = new wxToggleButton(this, ID_TOGGLEBUTTON1, _("Oui"), wxPoint(64,128), wxSize(104,44), 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON1"));
    ToggleButton2 = new wxToggleButton(this, ID_TOGGLEBUTTON2, _("Non"), wxPoint(280,128), wxSize(104,44), 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON2"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&PopUpAnnulationDeReservationFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&PopUpAnnulationDeReservationFrame::OnAbout);
    //*)
}

PopUpAnnulationDeReservationFrame::~PopUpAnnulationDeReservationFrame()
{
    //(*Destroy(PopUpAnnulationDeReservationFrame)
    //*)
}

void PopUpAnnulationDeReservationFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void PopUpAnnulationDeReservationFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
