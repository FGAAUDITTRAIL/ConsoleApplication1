// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdafx.h"


int main()
{
    return 0;
}

class xRouteEngine
{
	FormDataSource          fdsXRouteTable;
	FormDataSource          fdsXRouteLines;
	FormDataSource          fdsXRouteHistoryTable;
	FormDataSource          fdsDocumentTable;

	Object                  parentFormControl;

	XRouteTable             xRouteTable;
	XRouteHistoryTable      XRouteHistoryTable;

	FormRun                 callerForm;
	FormMenuButtonControl   menuButtonControl, xRouteMenuButton;

	QueryBuildDataSource    qbdsXRouteTable;
	QueryBuildDataSource    qbdsXRouteHistoryTable;

	Map                     actionsMap;
	MapIterator             actionsIterator;
	KeyList                 xRouteButtonsList;
	FormDataSource          fdsCurrent;

	xRouteTemplateActionGroupId currentActionGroupId;
	xRouteTemplateActionId      currentActionId;
	xRouteTemplateId            currentxRouteTemplateId;
	Map                         currentLinesMap;
	Map                         xRouteFilterMap;

	xRouteTemplateId            newXRouteTemplateId; //5.0 :: vserg xRoute - Новый номер шаблона маршрута, если есть настроенное действие

	#xRoute
}

