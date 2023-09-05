/*
 * Copyright 2006 Milan Digital Audio LLC
 * Copyright 2009-2023 GrandOrgue contributors (see AUTHORS)
 * License GPL-2.0 or later
 * (https://www.gnu.org/licenses/old-licenses/gpl-2.0.html).
 */

#include "GOMidiConfigurator.h"

#include <wx/intl.h>

#include "dialog-creator/GOMidiDialogCreator.h"

void GOMidiConfigurator::ShowConfigDialog() {
  wxString title = wxString::Format(
    _("Midi-Settings for %s - %s"), GetMidiType(), GetMidiName());

  r_DialogCreator.ShowMIDIEventDialog(
    this,
    title,
    GetMidiReceiver(),
    GetMidiSender(),
    GetMidiShortcutReceiver(),
    GetDivision());
}
