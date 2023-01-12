/***************************************************************
 * Name:      PopUpdeValidationReservationApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-12
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "PopUpdeValidationReservationApp.h"

//(*AppHeaders
#include "PopUpdeValidationReservationMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(PopUpdeValidationReservationApp);

bool PopUpdeValidationReservationApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	PopUpdeValidationReservationFrame* Frame = new PopUpdeValidationReservationFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
