/***************************************************************
 * Name:      EcranInscriptionApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-11
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "EcranInscriptionApp.h"

//(*AppHeaders
#include "EcranInscriptionMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(EcranInscriptionApp);

bool EcranInscriptionApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	EcranInscriptionFrame* Frame = new EcranInscriptionFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
