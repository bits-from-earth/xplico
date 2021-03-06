/* analyse.c
 * analyse stack and time to realise pei
 *
 * $Id:  $
 *
 * Xplico System
 * By Gianluca Costa <g.costa@xplico.org>
 * Copyright 2010 Gianluca Costa & Andrea de Franceschi. Web: www.xplico.org
 *
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
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#include "log.h"
#include "analyse.h"
#include "proto.h"

static int AnalyseSort(pei *ppei)
{
    return 0;
}


int AnalyseInit(void)
{
    return 0;
}


int AnalysePei(pei *ppei)
{
    PeiPrint(ppei);
    ProtStackFrmDisp(ppei->stack, TRUE);
    if (ppei->ret == TRUE) {
        ProtStackFrmDisp(ppei->stack, TRUE);
        LogPrintf(LV_WARNING, "Pei with return!");
    }
    PeiIns(ppei);

    return 0;
}


int AnalyseEnd(void)
{

    return 0;
}

