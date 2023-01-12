/***************************************************************
 * Name:      PopUpAnnulationDeReservationApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-12
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "PopUpAnnulationDeReservationApp.h"

//(*AppHeaders
#include "PopUpAnnulationDeReservationMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(PopUpAnnulationDeReservationApp);

bool PopUpAnnulationDeReservationApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	PopUpAnnulationDeReservationFrame* Frame = new PopUpAnnulationDeReservationFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
