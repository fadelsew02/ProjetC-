/***************************************************************
 * Name:      PopUpAnnulationDeReservationMain.h
 * Purpose:   Defines Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-12
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#ifndef POPUPANNULATIONDERESERVATIONMAIN_H
#define POPUPANNULATIONDERESERVATIONMAIN_H

//(*Headers(PopUpAnnulationDeReservationFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/tglbtn.h>
//*)

class PopUpAnnulationDeReservationFrame: public wxFrame
{
    public:

        PopUpAnnulationDeReservationFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~PopUpAnnulationDeReservationFrame();

    private:

        //(*Handlers(PopUpAnnulationDeReservationFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(PopUpAnnulationDeReservationFrame)
        static const long ID_STATICBITMAP1;
        static const long ID_STATICTEXT1;
        static const long ID_TOGGLEBUTTON1;
        static const long ID_TOGGLEBUTTON2;
        static const long ID_MENUITEM1;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(PopUpAnnulationDeReservationFrame)
        wxStaticBitmap* StaticBitmap1;
        wxStaticText* StaticText1;
        wxStatusBar* StatusBar1;
        wxToggleButton* ToggleButton1;
        wxToggleButton* ToggleButton2;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // POPUPANNULATIONDERESERVATIONMAIN_H
