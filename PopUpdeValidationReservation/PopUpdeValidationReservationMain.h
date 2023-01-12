/***************************************************************
 * Name:      PopUpdeValidationReservationMain.h
 * Purpose:   Defines Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-12
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#ifndef POPUPDEVALIDATIONRESERVATIONMAIN_H
#define POPUPDEVALIDATIONRESERVATIONMAIN_H

//(*Headers(PopUpdeValidationReservationFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/tglbtn.h>
//*)

class PopUpdeValidationReservationFrame: public wxFrame
{
    public:

        PopUpdeValidationReservationFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~PopUpdeValidationReservationFrame();

    private:

        //(*Handlers(PopUpdeValidationReservationFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(PopUpdeValidationReservationFrame)
        static const long ID_STATICBITMAP1;
        static const long ID_TOGGLEBUTTON1;
        static const long ID_TOGGLEBUTTON2;
        static const long ID_STATICTEXT1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(PopUpdeValidationReservationFrame)
        wxStaticBitmap* StaticBitmap1;
        wxStaticText* StaticText1;
        wxStatusBar* StatusBar1;
        wxToggleButton* ToggleButton1;
        wxToggleButton* ToggleButton2;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // POPUPDEVALIDATIONRESERVATIONMAIN_H
