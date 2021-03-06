
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function Frame_Create(AOwner: TComponent): TFrame; stdcall;
begin
  Result :=  TFrame.Create(AOwner);
end;

procedure Frame_Free(AObj: TFrame); stdcall;
begin
  AObj.Free;
end;

procedure Frame_DisableAutoRange(AObj: TFrame); stdcall;
begin
  AObj.DisableAutoRange;
end;

procedure Frame_EnableAutoRange(AObj: TFrame); stdcall;
begin
  AObj.EnableAutoRange;
end;

procedure Frame_ScrollInView(AObj: TFrame; AControl: TControl); stdcall;
begin
  AObj.ScrollInView(AControl);
end;

function Frame_CanFocus(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.CanFocus;
end;

function Frame_ContainsControl(AObj: TFrame; Control: TControl): LongBool; stdcall;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function Frame_ControlAtPos(AObj: TFrame; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool; AllLevels: LongBool): TControl; stdcall;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls, AllLevels);
end;

procedure Frame_DisableAlign(AObj: TFrame); stdcall;
begin
  AObj.DisableAlign;
end;

procedure Frame_EnableAlign(AObj: TFrame); stdcall;
begin
  AObj.EnableAlign;
end;

function Frame_FindChildControl(AObj: TFrame; ControlName: PChar): TControl; stdcall;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure Frame_FlipChildren(AObj: TFrame; AllLevels: LongBool); stdcall;
begin
  AObj.FlipChildren(AllLevels);
end;

function Frame_Focused(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.Focused;
end;

function Frame_HandleAllocated(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure Frame_InsertControl(AObj: TFrame; AControl: TControl); stdcall;
begin
  AObj.InsertControl(AControl);
end;

procedure Frame_Invalidate(AObj: TFrame); stdcall;
begin
  AObj.Invalidate;
end;

procedure Frame_PaintTo(AObj: TFrame; DC: HDC; X: Integer; Y: Integer); stdcall;
begin
  AObj.PaintTo(DC, X, Y);
end;

procedure Frame_RemoveControl(AObj: TFrame; AControl: TControl); stdcall;
begin
  AObj.RemoveControl(AControl);
end;

procedure Frame_Realign(AObj: TFrame); stdcall;
begin
  AObj.Realign;
end;

procedure Frame_Repaint(AObj: TFrame); stdcall;
begin
  AObj.Repaint;
end;

procedure Frame_ScaleBy(AObj: TFrame; M: Integer; D: Integer); stdcall;
begin
  AObj.ScaleBy(M, D);
end;

procedure Frame_ScrollBy(AObj: TFrame; DeltaX: Integer; DeltaY: Integer); stdcall;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure Frame_SetBounds(AObj: TFrame; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); stdcall;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure Frame_SetFocus(AObj: TFrame); stdcall;
begin
  AObj.SetFocus;
end;

procedure Frame_Update(AObj: TFrame); stdcall;
begin
  AObj.Update;
end;

procedure Frame_UpdateControlState(AObj: TFrame); stdcall;
begin
  AObj.UpdateControlState;
end;

procedure Frame_BringToFront(AObj: TFrame); stdcall;
begin
  AObj.BringToFront;
end;

procedure Frame_ClientToScreen(AObj: TFrame; var Point: TPoint; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure Frame_ClientToParent(AObj: TFrame; var Point: TPoint; AParent: TWinControl; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function Frame_Dragging(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.Dragging;
end;

function Frame_HasParent(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.HasParent;
end;

procedure Frame_Hide(AObj: TFrame); stdcall;
begin
  AObj.Hide;
end;

function Frame_Perform(AObj: TFrame; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; stdcall;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure Frame_Refresh(AObj: TFrame); stdcall;
begin
  AObj.Refresh;
end;

procedure Frame_ScreenToClient(AObj: TFrame; var Point: TPoint; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure Frame_ParentToClient(AObj: TFrame; var Point: TPoint; AParent: TWinControl; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure Frame_SendToBack(AObj: TFrame); stdcall;
begin
  AObj.SendToBack;
end;

procedure Frame_Show(AObj: TFrame); stdcall;
begin
  AObj.Show;
end;

function Frame_GetTextBuf(AObj: TFrame; Buffer: PWideChar; BufSize: Integer): Integer; stdcall;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function Frame_GetTextLen(AObj: TFrame): Integer; stdcall;
begin
  Result :=  AObj.GetTextLen;
end;

procedure Frame_SetTextBuf(AObj: TFrame; Buffer: PWideChar); stdcall;
begin
  AObj.SetTextBuf(Buffer);
end;

function Frame_FindComponent(AObj: TFrame; AName: PChar): TComponent; stdcall;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Frame_GetNamePath(AObj: TFrame): PChar; stdcall;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure Frame_Assign(AObj: TFrame; Source: TPersistent); stdcall;
begin
  AObj.Assign(Source);
end;

procedure Frame_DisposeOf(AObj: TFrame); stdcall;
begin
  AObj.DisposeOf;
end;

function Frame_ClassType(AObj: TFrame): TClass; stdcall;
begin
  Result :=  AObj.ClassType;
end;

function Frame_ClassName(AObj: TFrame): PChar; stdcall;
begin
  Result :=  PChar(AObj.ClassName);
end;

function Frame_InstanceSize(AObj: TFrame): Integer; stdcall;
begin
  Result :=  AObj.InstanceSize;
end;

function Frame_InheritsFrom(AObj: TFrame; AClass: TClass): LongBool; stdcall;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function Frame_Equals(AObj: TFrame; Obj: TObject): LongBool; stdcall;
begin
  Result :=  AObj.Equals(Obj);
end;

function Frame_GetHashCode(AObj: TFrame): Integer; stdcall;
begin
  Result :=  AObj.GetHashCode;
end;

function Frame_ToString(AObj: TFrame): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToString);
end;

function Frame_GetAlign(AObj: TFrame): TAlign; stdcall;
begin
  Result :=  AObj.Align;
end;

procedure Frame_SetAlign(AObj: TFrame; AValue: TAlign); stdcall;
begin
  AObj.Align := AValue;
end;

function Frame_GetAnchors(AObj: TFrame): TAnchors; stdcall;
begin
  Result :=  AObj.Anchors;
end;

procedure Frame_SetAnchors(AObj: TFrame; AValue: TAnchors); stdcall;
begin
  AObj.Anchors := AValue;
end;

function Frame_GetAutoScroll(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.AutoScroll;
end;

procedure Frame_SetAutoScroll(AObj: TFrame; AValue: LongBool); stdcall;
begin
  AObj.AutoScroll := AValue;
end;

function Frame_GetAutoSize(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.AutoSize;
end;

procedure Frame_SetAutoSize(AObj: TFrame; AValue: LongBool); stdcall;
begin
  AObj.AutoSize := AValue;
end;

function Frame_GetBiDiMode(AObj: TFrame): TBiDiMode; stdcall;
begin
  Result :=  AObj.BiDiMode;
end;

procedure Frame_SetBiDiMode(AObj: TFrame; AValue: TBiDiMode); stdcall;
begin
  AObj.BiDiMode := AValue;
end;

function Frame_GetConstraints(AObj: TFrame): TSizeConstraints; stdcall;
begin
  Result :=  AObj.Constraints;
end;

procedure Frame_SetConstraints(AObj: TFrame; AValue: TSizeConstraints); stdcall;
begin
  AObj.Constraints := AValue;
end;

function Frame_GetDockSite(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.DockSite;
end;

procedure Frame_SetDockSite(AObj: TFrame; AValue: LongBool); stdcall;
begin
  AObj.DockSite := AValue;
end;

function Frame_GetDoubleBuffered(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure Frame_SetDoubleBuffered(AObj: TFrame; AValue: LongBool); stdcall;
begin
  AObj.DoubleBuffered := AValue;
end;

function Frame_GetDragCursor(AObj: TFrame): TCursor; stdcall;
begin
  Result :=  AObj.DragCursor;
end;

procedure Frame_SetDragCursor(AObj: TFrame; AValue: TCursor); stdcall;
begin
  AObj.DragCursor := AValue;
end;

function Frame_GetDragKind(AObj: TFrame): TDragKind; stdcall;
begin
  Result :=  AObj.DragKind;
end;

procedure Frame_SetDragKind(AObj: TFrame; AValue: TDragKind); stdcall;
begin
  AObj.DragKind := AValue;
end;

function Frame_GetDragMode(AObj: TFrame): TDragMode; stdcall;
begin
  Result :=  AObj.DragMode;
end;

procedure Frame_SetDragMode(AObj: TFrame; AValue: TDragMode); stdcall;
begin
  AObj.DragMode := AValue;
end;

function Frame_GetEnabled(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.Enabled;
end;

procedure Frame_SetEnabled(AObj: TFrame; AValue: LongBool); stdcall;
begin
  AObj.Enabled := AValue;
end;

function Frame_GetColor(AObj: TFrame): TColor; stdcall;
begin
  Result :=  AObj.Color;
end;

procedure Frame_SetColor(AObj: TFrame; AValue: TColor); stdcall;
begin
  AObj.Color := AValue;
end;

function Frame_GetCtl3D(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.Ctl3D;
end;

procedure Frame_SetCtl3D(AObj: TFrame; AValue: LongBool); stdcall;
begin
  AObj.Ctl3D := AValue;
end;

function Frame_GetFont(AObj: TFrame): TFont; stdcall;
begin
  Result :=  AObj.Font;
end;

procedure Frame_SetFont(AObj: TFrame; AValue: TFont); stdcall;
begin
  AObj.Font := AValue;
end;

function Frame_GetParentBackground(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.ParentBackground;
end;

procedure Frame_SetParentBackground(AObj: TFrame; AValue: LongBool); stdcall;
begin
  AObj.ParentBackground := AValue;
end;

function Frame_GetParentColor(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.ParentColor;
end;

procedure Frame_SetParentColor(AObj: TFrame; AValue: LongBool); stdcall;
begin
  AObj.ParentColor := AValue;
end;

function Frame_GetParentCtl3D(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.ParentCtl3D;
end;

procedure Frame_SetParentCtl3D(AObj: TFrame; AValue: LongBool); stdcall;
begin
  AObj.ParentCtl3D := AValue;
end;

function Frame_GetParentDoubleBuffered(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure Frame_SetParentDoubleBuffered(AObj: TFrame; AValue: LongBool); stdcall;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function Frame_GetParentFont(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.ParentFont;
end;

procedure Frame_SetParentFont(AObj: TFrame; AValue: LongBool); stdcall;
begin
  AObj.ParentFont := AValue;
end;

function Frame_GetParentShowHint(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure Frame_SetParentShowHint(AObj: TFrame; AValue: LongBool); stdcall;
begin
  AObj.ParentShowHint := AValue;
end;

function Frame_GetPopupMenu(AObj: TFrame): TPopupMenu; stdcall;
begin
  Result :=  AObj.PopupMenu;
end;

procedure Frame_SetPopupMenu(AObj: TFrame; AValue: TPopupMenu); stdcall;
begin
  AObj.PopupMenu := AValue;
end;

function Frame_GetShowHint(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.ShowHint;
end;

procedure Frame_SetShowHint(AObj: TFrame; AValue: LongBool); stdcall;
begin
  AObj.ShowHint := AValue;
end;

function Frame_GetTabOrder(AObj: TFrame): TTabOrder; stdcall;
begin
  Result :=  AObj.TabOrder;
end;

procedure Frame_SetTabOrder(AObj: TFrame; AValue: TTabOrder); stdcall;
begin
  AObj.TabOrder := AValue;
end;

function Frame_GetTabStop(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.TabStop;
end;

procedure Frame_SetTabStop(AObj: TFrame; AValue: LongBool); stdcall;
begin
  AObj.TabStop := AValue;
end;

function Frame_GetVisible(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.Visible;
end;

procedure Frame_SetVisible(AObj: TFrame; AValue: LongBool); stdcall;
begin
  AObj.Visible := AValue;
end;

procedure Frame_SetOnClick(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnClick := nil;
    TEventClass.Remove(AObj, @TEventClass.OnClick);
    Exit;
  end;
  AObj.OnClick := TEventClass.OnClick;
  TEventClass.Add(AObj, @TEventClass.OnClick, AEventId);
end;

procedure Frame_SetOnContextPopup(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnContextPopup := nil;
    TEventClass.Remove(AObj, @TEventClass.OnContextPopup);
    Exit;
  end;
  AObj.OnContextPopup := TEventClass.OnContextPopup;
  TEventClass.Add(AObj, @TEventClass.OnContextPopup, AEventId);
end;

procedure Frame_SetOnDblClick(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnDblClick := nil;
    TEventClass.Remove(AObj, @TEventClass.OnDblClick);
    Exit;
  end;
  AObj.OnDblClick := TEventClass.OnDblClick;
  TEventClass.Add(AObj, @TEventClass.OnDblClick, AEventId);
end;

procedure Frame_SetOnDockDrop(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnDockDrop := nil;
    TEventClass.Remove(AObj, @TEventClass.OnDockDrop);
    Exit;
  end;
  AObj.OnDockDrop := TEventClass.OnDockDrop;
  TEventClass.Add(AObj, @TEventClass.OnDockDrop, AEventId);
end;

procedure Frame_SetOnDragDrop(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnDragDrop := nil;
    TEventClass.Remove(AObj, @TEventClass.OnDragDrop);
    Exit;
  end;
  AObj.OnDragDrop := TEventClass.OnDragDrop;
  TEventClass.Add(AObj, @TEventClass.OnDragDrop, AEventId);
end;

procedure Frame_SetOnDragOver(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnDragOver := nil;
    TEventClass.Remove(AObj, @TEventClass.OnDragOver);
    Exit;
  end;
  AObj.OnDragOver := TEventClass.OnDragOver;
  TEventClass.Add(AObj, @TEventClass.OnDragOver, AEventId);
end;

procedure Frame_SetOnEndDock(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnEndDock := nil;
    TEventClass.Remove(AObj, @TEventClass.OnEndDock);
    Exit;
  end;
  AObj.OnEndDock := TEventClass.OnEndDock;
  TEventClass.Add(AObj, @TEventClass.OnEndDock, AEventId);
end;

procedure Frame_SetOnEndDrag(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnEndDrag := nil;
    TEventClass.Remove(AObj, @TEventClass.OnEndDrag);
    Exit;
  end;
  AObj.OnEndDrag := TEventClass.OnEndDrag;
  TEventClass.Add(AObj, @TEventClass.OnEndDrag, AEventId);
end;

procedure Frame_SetOnEnter(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnEnter := nil;
    TEventClass.Remove(AObj, @TEventClass.OnEnter);
    Exit;
  end;
  AObj.OnEnter := TEventClass.OnEnter;
  TEventClass.Add(AObj, @TEventClass.OnEnter, AEventId);
end;

procedure Frame_SetOnExit(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnExit := nil;
    TEventClass.Remove(AObj, @TEventClass.OnExit);
    Exit;
  end;
  AObj.OnExit := TEventClass.OnExit;
  TEventClass.Add(AObj, @TEventClass.OnExit, AEventId);
end;

procedure Frame_SetOnGesture(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnGesture := nil;
    TEventClass.Remove(AObj, @TEventClass.OnGesture);
    Exit;
  end;
  AObj.OnGesture := TEventClass.OnGesture;
  TEventClass.Add(AObj, @TEventClass.OnGesture, AEventId);
end;

procedure Frame_SetOnGetSiteInfo(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnGetSiteInfo := nil;
    TEventClass.Remove(AObj, @TEventClass.OnGetSiteInfo);
    Exit;
  end;
  AObj.OnGetSiteInfo := TEventClass.OnGetSiteInfo;
  TEventClass.Add(AObj, @TEventClass.OnGetSiteInfo, AEventId);
end;

procedure Frame_SetOnMouseActivate(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseActivate := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseActivate);
    Exit;
  end;
  AObj.OnMouseActivate := TEventClass.OnMouseActivate;
  TEventClass.Add(AObj, @TEventClass.OnMouseActivate, AEventId);
end;

procedure Frame_SetOnMouseDown(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseDown := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseDown);
    Exit;
  end;
  AObj.OnMouseDown := TEventClass.OnMouseDown;
  TEventClass.Add(AObj, @TEventClass.OnMouseDown, AEventId);
end;

procedure Frame_SetOnMouseEnter(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseEnter := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseEnter);
    Exit;
  end;
  AObj.OnMouseEnter := TEventClass.OnMouseEnter;
  TEventClass.Add(AObj, @TEventClass.OnMouseEnter, AEventId);
end;

procedure Frame_SetOnMouseLeave(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseLeave := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseLeave);
    Exit;
  end;
  AObj.OnMouseLeave := TEventClass.OnMouseLeave;
  TEventClass.Add(AObj, @TEventClass.OnMouseLeave, AEventId);
end;

procedure Frame_SetOnMouseMove(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseMove := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseMove);
    Exit;
  end;
  AObj.OnMouseMove := TEventClass.OnMouseMove;
  TEventClass.Add(AObj, @TEventClass.OnMouseMove, AEventId);
end;

procedure Frame_SetOnMouseUp(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseUp := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseUp);
    Exit;
  end;
  AObj.OnMouseUp := TEventClass.OnMouseUp;
  TEventClass.Add(AObj, @TEventClass.OnMouseUp, AEventId);
end;

procedure Frame_SetOnMouseWheel(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseWheel := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseWheel);
    Exit;
  end;
  AObj.OnMouseWheel := TEventClass.OnMouseWheel;
  TEventClass.Add(AObj, @TEventClass.OnMouseWheel, AEventId);
end;

procedure Frame_SetOnMouseWheelDown(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseWheelDown := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseWheelDown);
    Exit;
  end;
  AObj.OnMouseWheelDown := TEventClass.OnMouseWheelDown;
  TEventClass.Add(AObj, @TEventClass.OnMouseWheelDown, AEventId);
end;

procedure Frame_SetOnMouseWheelUp(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseWheelUp := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseWheelUp);
    Exit;
  end;
  AObj.OnMouseWheelUp := TEventClass.OnMouseWheelUp;
  TEventClass.Add(AObj, @TEventClass.OnMouseWheelUp, AEventId);
end;

procedure Frame_SetOnResize(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnResize := nil;
    TEventClass.Remove(AObj, @TEventClass.OnResize);
    Exit;
  end;
  AObj.OnResize := TEventClass.OnResize;
  TEventClass.Add(AObj, @TEventClass.OnResize, AEventId);
end;

procedure Frame_SetOnStartDock(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnStartDock := nil;
    TEventClass.Remove(AObj, @TEventClass.OnStartDock);
    Exit;
  end;
  AObj.OnStartDock := TEventClass.OnStartDock;
  TEventClass.Add(AObj, @TEventClass.OnStartDock, AEventId);
end;

procedure Frame_SetOnUnDock(AObj: TFrame; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnUnDock := nil;
    TEventClass.Remove(AObj, @TEventClass.OnUnDock);
    Exit;
  end;
  AObj.OnUnDock := TEventClass.OnUnDock;
  TEventClass.Add(AObj, @TEventClass.OnUnDock, AEventId);
end;

function Frame_GetHorzScrollBar(AObj: TFrame): TControlScrollBar; stdcall;
begin
  Result :=  AObj.HorzScrollBar;
end;

procedure Frame_SetHorzScrollBar(AObj: TFrame; AValue: TControlScrollBar); stdcall;
begin
  AObj.HorzScrollBar := AValue;
end;

function Frame_GetVertScrollBar(AObj: TFrame): TControlScrollBar; stdcall;
begin
  Result :=  AObj.VertScrollBar;
end;

procedure Frame_SetVertScrollBar(AObj: TFrame; AValue: TControlScrollBar); stdcall;
begin
  AObj.VertScrollBar := AValue;
end;

function Frame_GetDockClientCount(AObj: TFrame): Integer; stdcall;
begin
  Result :=  AObj.DockClientCount;
end;

function Frame_GetAlignDisabled(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.AlignDisabled;
end;

function Frame_GetMouseInClient(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.MouseInClient;
end;

function Frame_GetVisibleDockClientCount(AObj: TFrame): Integer; stdcall;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function Frame_GetBrush(AObj: TFrame): TBrush; stdcall;
begin
  Result :=  AObj.Brush;
end;

function Frame_GetControlCount(AObj: TFrame): Integer; stdcall;
begin
  Result :=  AObj.ControlCount;
end;

function Frame_GetHandle(AObj: TFrame): HWND; stdcall;
begin
  Result :=  AObj.Handle;
end;

function Frame_GetParentWindow(AObj: TFrame): HWND; stdcall;
begin
  Result :=  AObj.ParentWindow;
end;

procedure Frame_SetParentWindow(AObj: TFrame; AValue: HWND); stdcall;
begin
  AObj.ParentWindow := AValue;
end;

function Frame_GetUseDockManager(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.UseDockManager;
end;

procedure Frame_SetUseDockManager(AObj: TFrame; AValue: LongBool); stdcall;
begin
  AObj.UseDockManager := AValue;
end;

function Frame_GetAction(AObj: TFrame): TBasicAction; stdcall;
begin
  Result :=  AObj.Action;
end;

procedure Frame_SetAction(AObj: TFrame; AValue: TBasicAction); stdcall;
begin
  AObj.Action := AValue;
end;

procedure Frame_GetBoundsRect(AObj: TFrame; var Result: TRect); stdcall;
begin
  Result :=  AObj.BoundsRect;
end;

procedure Frame_SetBoundsRect(AObj: TFrame; var AValue: TRect); stdcall;
begin
  AObj.BoundsRect := AValue;
end;

function Frame_GetClientHeight(AObj: TFrame): Integer; stdcall;
begin
  Result :=  AObj.ClientHeight;
end;

procedure Frame_SetClientHeight(AObj: TFrame; AValue: Integer); stdcall;
begin
  AObj.ClientHeight := AValue;
end;

procedure Frame_GetClientOrigin(AObj: TFrame; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure Frame_GetClientRect(AObj: TFrame; var Result: TRect); stdcall;
begin
  Result :=  AObj.ClientRect;
end;

function Frame_GetClientWidth(AObj: TFrame): Integer; stdcall;
begin
  Result :=  AObj.ClientWidth;
end;

procedure Frame_SetClientWidth(AObj: TFrame; AValue: Integer); stdcall;
begin
  AObj.ClientWidth := AValue;
end;

function Frame_GetControlState(AObj: TFrame): TControlState; stdcall;
begin
  Result :=  AObj.ControlState;
end;

procedure Frame_SetControlState(AObj: TFrame; AValue: TControlState); stdcall;
begin
  AObj.ControlState := AValue;
end;

function Frame_GetControlStyle(AObj: TFrame): TControlStyle; stdcall;
begin
  Result :=  AObj.ControlStyle;
end;

procedure Frame_SetControlStyle(AObj: TFrame; AValue: TControlStyle); stdcall;
begin
  AObj.ControlStyle := AValue;
end;

function Frame_GetExplicitLeft(AObj: TFrame): Integer; stdcall;
begin
  Result :=  AObj.ExplicitLeft;
end;

function Frame_GetExplicitTop(AObj: TFrame): Integer; stdcall;
begin
  Result :=  AObj.ExplicitTop;
end;

function Frame_GetExplicitWidth(AObj: TFrame): Integer; stdcall;
begin
  Result :=  AObj.ExplicitWidth;
end;

function Frame_GetExplicitHeight(AObj: TFrame): Integer; stdcall;
begin
  Result :=  AObj.ExplicitHeight;
end;

function Frame_GetFloating(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.Floating;
end;

function Frame_GetParent(AObj: TFrame): TWinControl; stdcall;
begin
  Result :=  AObj.Parent;
end;

procedure Frame_SetParent(AObj: TFrame; AValue: TWinControl); stdcall;
begin
  AObj.Parent := AValue;
end;

function Frame_GetStyleElements(AObj: TFrame): TStyleElements; stdcall;
begin
  Result :=  AObj.StyleElements;
end;

procedure Frame_SetStyleElements(AObj: TFrame; AValue: TStyleElements); stdcall;
begin
  AObj.StyleElements := AValue;
end;

function Frame_GetAlignWithMargins(AObj: TFrame): LongBool; stdcall;
begin
  Result :=  AObj.AlignWithMargins;
end;

procedure Frame_SetAlignWithMargins(AObj: TFrame; AValue: LongBool); stdcall;
begin
  AObj.AlignWithMargins := AValue;
end;

function Frame_GetLeft(AObj: TFrame): Integer; stdcall;
begin
  Result :=  AObj.Left;
end;

procedure Frame_SetLeft(AObj: TFrame; AValue: Integer); stdcall;
begin
  AObj.Left := AValue;
end;

function Frame_GetTop(AObj: TFrame): Integer; stdcall;
begin
  Result :=  AObj.Top;
end;

procedure Frame_SetTop(AObj: TFrame; AValue: Integer); stdcall;
begin
  AObj.Top := AValue;
end;

function Frame_GetWidth(AObj: TFrame): Integer; stdcall;
begin
  Result :=  AObj.Width;
end;

procedure Frame_SetWidth(AObj: TFrame; AValue: Integer); stdcall;
begin
  AObj.Width := AValue;
end;

function Frame_GetHeight(AObj: TFrame): Integer; stdcall;
begin
  Result :=  AObj.Height;
end;

procedure Frame_SetHeight(AObj: TFrame; AValue: Integer); stdcall;
begin
  AObj.Height := AValue;
end;

function Frame_GetCursor(AObj: TFrame): TCursor; stdcall;
begin
  Result :=  AObj.Cursor;
end;

procedure Frame_SetCursor(AObj: TFrame; AValue: TCursor); stdcall;
begin
  AObj.Cursor := AValue;
end;

function Frame_GetHint(AObj: TFrame): PChar; stdcall;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure Frame_SetHint(AObj: TFrame; AValue: PChar); stdcall;
begin
  AObj.Hint := AValue;
end;

function Frame_GetMargins(AObj: TFrame): TMargins; stdcall;
begin
  Result :=  AObj.Margins;
end;

procedure Frame_SetMargins(AObj: TFrame; AValue: TMargins); stdcall;
begin
  AObj.Margins := AValue;
end;

function Frame_GetCustomHint(AObj: TFrame): TCustomHint; stdcall;
begin
  Result :=  AObj.CustomHint;
end;

procedure Frame_SetCustomHint(AObj: TFrame; AValue: TCustomHint); stdcall;
begin
  AObj.CustomHint := AValue;
end;

function Frame_GetComponentCount(AObj: TFrame): Integer; stdcall;
begin
  Result :=  AObj.ComponentCount;
end;

function Frame_GetComponentIndex(AObj: TFrame): Integer; stdcall;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Frame_SetComponentIndex(AObj: TFrame; AValue: Integer); stdcall;
begin
  AObj.ComponentIndex := AValue;
end;

function Frame_GetOwner(AObj: TFrame): TComponent; stdcall;
begin
  Result :=  AObj.Owner;
end;

function Frame_GetName(AObj: TFrame): PChar; stdcall;
begin
  Result :=  PChar(AObj.Name);
end;

procedure Frame_SetName(AObj: TFrame; AValue: PChar); stdcall;
begin
  AObj.Name := AValue;
end;

function Frame_GetTag(AObj: TFrame): NativeInt; stdcall;
begin
  Result :=  AObj.Tag;
end;

procedure Frame_SetTag(AObj: TFrame; AValue: NativeInt); stdcall;
begin
  AObj.Tag := AValue;
end;

function Frame_GetDockClients(AObj: TFrame; Index: Integer): TControl; stdcall;
begin
  Result :=  AObj.DockClients[Index];
end;

function Frame_GetControls(AObj: TFrame; Index: Integer): TControl; stdcall;
begin
  Result :=  AObj.Controls[Index];
end;

function Frame_GetComponents(AObj: TFrame; AIndex: Integer): TComponent; stdcall;
begin
  Result :=  AObj.Components[AIndex];
end;

function Frame_StaticClassType: TClass; stdcall;
begin
  Result := TFrame;
end;

exports
  Frame_Create,
  Frame_Free,
  Frame_DisableAutoRange,
  Frame_EnableAutoRange,
  Frame_ScrollInView,
  Frame_CanFocus,
  Frame_ContainsControl,
  Frame_ControlAtPos,
  Frame_DisableAlign,
  Frame_EnableAlign,
  Frame_FindChildControl,
  Frame_FlipChildren,
  Frame_Focused,
  Frame_HandleAllocated,
  Frame_InsertControl,
  Frame_Invalidate,
  Frame_PaintTo,
  Frame_RemoveControl,
  Frame_Realign,
  Frame_Repaint,
  Frame_ScaleBy,
  Frame_ScrollBy,
  Frame_SetBounds,
  Frame_SetFocus,
  Frame_Update,
  Frame_UpdateControlState,
  Frame_BringToFront,
  Frame_ClientToScreen,
  Frame_ClientToParent,
  Frame_Dragging,
  Frame_HasParent,
  Frame_Hide,
  Frame_Perform,
  Frame_Refresh,
  Frame_ScreenToClient,
  Frame_ParentToClient,
  Frame_SendToBack,
  Frame_Show,
  Frame_GetTextBuf,
  Frame_GetTextLen,
  Frame_SetTextBuf,
  Frame_FindComponent,
  Frame_GetNamePath,
  Frame_Assign,
  Frame_DisposeOf,
  Frame_ClassType,
  Frame_ClassName,
  Frame_InstanceSize,
  Frame_InheritsFrom,
  Frame_Equals,
  Frame_GetHashCode,
  Frame_ToString,
  Frame_GetAlign,
  Frame_SetAlign,
  Frame_GetAnchors,
  Frame_SetAnchors,
  Frame_GetAutoScroll,
  Frame_SetAutoScroll,
  Frame_GetAutoSize,
  Frame_SetAutoSize,
  Frame_GetBiDiMode,
  Frame_SetBiDiMode,
  Frame_GetConstraints,
  Frame_SetConstraints,
  Frame_GetDockSite,
  Frame_SetDockSite,
  Frame_GetDoubleBuffered,
  Frame_SetDoubleBuffered,
  Frame_GetDragCursor,
  Frame_SetDragCursor,
  Frame_GetDragKind,
  Frame_SetDragKind,
  Frame_GetDragMode,
  Frame_SetDragMode,
  Frame_GetEnabled,
  Frame_SetEnabled,
  Frame_GetColor,
  Frame_SetColor,
  Frame_GetCtl3D,
  Frame_SetCtl3D,
  Frame_GetFont,
  Frame_SetFont,
  Frame_GetParentBackground,
  Frame_SetParentBackground,
  Frame_GetParentColor,
  Frame_SetParentColor,
  Frame_GetParentCtl3D,
  Frame_SetParentCtl3D,
  Frame_GetParentDoubleBuffered,
  Frame_SetParentDoubleBuffered,
  Frame_GetParentFont,
  Frame_SetParentFont,
  Frame_GetParentShowHint,
  Frame_SetParentShowHint,
  Frame_GetPopupMenu,
  Frame_SetPopupMenu,
  Frame_GetShowHint,
  Frame_SetShowHint,
  Frame_GetTabOrder,
  Frame_SetTabOrder,
  Frame_GetTabStop,
  Frame_SetTabStop,
  Frame_GetVisible,
  Frame_SetVisible,
  Frame_SetOnClick,
  Frame_SetOnContextPopup,
  Frame_SetOnDblClick,
  Frame_SetOnDockDrop,
  Frame_SetOnDragDrop,
  Frame_SetOnDragOver,
  Frame_SetOnEndDock,
  Frame_SetOnEndDrag,
  Frame_SetOnEnter,
  Frame_SetOnExit,
  Frame_SetOnGesture,
  Frame_SetOnGetSiteInfo,
  Frame_SetOnMouseActivate,
  Frame_SetOnMouseDown,
  Frame_SetOnMouseEnter,
  Frame_SetOnMouseLeave,
  Frame_SetOnMouseMove,
  Frame_SetOnMouseUp,
  Frame_SetOnMouseWheel,
  Frame_SetOnMouseWheelDown,
  Frame_SetOnMouseWheelUp,
  Frame_SetOnResize,
  Frame_SetOnStartDock,
  Frame_SetOnUnDock,
  Frame_GetHorzScrollBar,
  Frame_SetHorzScrollBar,
  Frame_GetVertScrollBar,
  Frame_SetVertScrollBar,
  Frame_GetDockClientCount,
  Frame_GetAlignDisabled,
  Frame_GetMouseInClient,
  Frame_GetVisibleDockClientCount,
  Frame_GetBrush,
  Frame_GetControlCount,
  Frame_GetHandle,
  Frame_GetParentWindow,
  Frame_SetParentWindow,
  Frame_GetUseDockManager,
  Frame_SetUseDockManager,
  Frame_GetAction,
  Frame_SetAction,
  Frame_GetBoundsRect,
  Frame_SetBoundsRect,
  Frame_GetClientHeight,
  Frame_SetClientHeight,
  Frame_GetClientOrigin,
  Frame_GetClientRect,
  Frame_GetClientWidth,
  Frame_SetClientWidth,
  Frame_GetControlState,
  Frame_SetControlState,
  Frame_GetControlStyle,
  Frame_SetControlStyle,
  Frame_GetExplicitLeft,
  Frame_GetExplicitTop,
  Frame_GetExplicitWidth,
  Frame_GetExplicitHeight,
  Frame_GetFloating,
  Frame_GetParent,
  Frame_SetParent,
  Frame_GetStyleElements,
  Frame_SetStyleElements,
  Frame_GetAlignWithMargins,
  Frame_SetAlignWithMargins,
  Frame_GetLeft,
  Frame_SetLeft,
  Frame_GetTop,
  Frame_SetTop,
  Frame_GetWidth,
  Frame_SetWidth,
  Frame_GetHeight,
  Frame_SetHeight,
  Frame_GetCursor,
  Frame_SetCursor,
  Frame_GetHint,
  Frame_SetHint,
  Frame_GetMargins,
  Frame_SetMargins,
  Frame_GetCustomHint,
  Frame_SetCustomHint,
  Frame_GetComponentCount,
  Frame_GetComponentIndex,
  Frame_SetComponentIndex,
  Frame_GetOwner,
  Frame_GetName,
  Frame_SetName,
  Frame_GetTag,
  Frame_SetTag,
  Frame_GetDockClients,
  Frame_GetControls,
  Frame_GetComponents,
  Frame_StaticClassType;

