
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function RadioButton_Create(AOwner: TComponent): TRadioButton; stdcall;
begin
  Result :=  TRadioButton.Create(AOwner);
end;

procedure RadioButton_Free(AObj: TRadioButton); stdcall;
begin
  AObj.Free;
end;

function RadioButton_CanFocus(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.CanFocus;
end;

function RadioButton_ContainsControl(AObj: TRadioButton; Control: TControl): LongBool; stdcall;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function RadioButton_ControlAtPos(AObj: TRadioButton; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool; AllLevels: LongBool): TControl; stdcall;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls, AllLevels);
end;

procedure RadioButton_DisableAlign(AObj: TRadioButton); stdcall;
begin
  AObj.DisableAlign;
end;

procedure RadioButton_EnableAlign(AObj: TRadioButton); stdcall;
begin
  AObj.EnableAlign;
end;

function RadioButton_FindChildControl(AObj: TRadioButton; ControlName: PChar): TControl; stdcall;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure RadioButton_FlipChildren(AObj: TRadioButton; AllLevels: LongBool); stdcall;
begin
  AObj.FlipChildren(AllLevels);
end;

function RadioButton_Focused(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.Focused;
end;

function RadioButton_HandleAllocated(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure RadioButton_InsertControl(AObj: TRadioButton; AControl: TControl); stdcall;
begin
  AObj.InsertControl(AControl);
end;

procedure RadioButton_Invalidate(AObj: TRadioButton); stdcall;
begin
  AObj.Invalidate;
end;

procedure RadioButton_PaintTo(AObj: TRadioButton; DC: HDC; X: Integer; Y: Integer); stdcall;
begin
  AObj.PaintTo(DC, X, Y);
end;

procedure RadioButton_RemoveControl(AObj: TRadioButton; AControl: TControl); stdcall;
begin
  AObj.RemoveControl(AControl);
end;

procedure RadioButton_Realign(AObj: TRadioButton); stdcall;
begin
  AObj.Realign;
end;

procedure RadioButton_Repaint(AObj: TRadioButton); stdcall;
begin
  AObj.Repaint;
end;

procedure RadioButton_ScaleBy(AObj: TRadioButton; M: Integer; D: Integer); stdcall;
begin
  AObj.ScaleBy(M, D);
end;

procedure RadioButton_ScrollBy(AObj: TRadioButton; DeltaX: Integer; DeltaY: Integer); stdcall;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure RadioButton_SetBounds(AObj: TRadioButton; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); stdcall;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure RadioButton_SetFocus(AObj: TRadioButton); stdcall;
begin
  AObj.SetFocus;
end;

procedure RadioButton_Update(AObj: TRadioButton); stdcall;
begin
  AObj.Update;
end;

procedure RadioButton_UpdateControlState(AObj: TRadioButton); stdcall;
begin
  AObj.UpdateControlState;
end;

procedure RadioButton_BringToFront(AObj: TRadioButton); stdcall;
begin
  AObj.BringToFront;
end;

procedure RadioButton_ClientToScreen(AObj: TRadioButton; var Point: TPoint; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure RadioButton_ClientToParent(AObj: TRadioButton; var Point: TPoint; AParent: TWinControl; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function RadioButton_Dragging(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.Dragging;
end;

function RadioButton_HasParent(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.HasParent;
end;

procedure RadioButton_Hide(AObj: TRadioButton); stdcall;
begin
  AObj.Hide;
end;

function RadioButton_Perform(AObj: TRadioButton; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; stdcall;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure RadioButton_Refresh(AObj: TRadioButton); stdcall;
begin
  AObj.Refresh;
end;

procedure RadioButton_ScreenToClient(AObj: TRadioButton; var Point: TPoint; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure RadioButton_ParentToClient(AObj: TRadioButton; var Point: TPoint; AParent: TWinControl; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure RadioButton_SendToBack(AObj: TRadioButton); stdcall;
begin
  AObj.SendToBack;
end;

procedure RadioButton_Show(AObj: TRadioButton); stdcall;
begin
  AObj.Show;
end;

function RadioButton_GetTextBuf(AObj: TRadioButton; Buffer: PWideChar; BufSize: Integer): Integer; stdcall;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function RadioButton_GetTextLen(AObj: TRadioButton): Integer; stdcall;
begin
  Result :=  AObj.GetTextLen;
end;

procedure RadioButton_SetTextBuf(AObj: TRadioButton; Buffer: PWideChar); stdcall;
begin
  AObj.SetTextBuf(Buffer);
end;

function RadioButton_FindComponent(AObj: TRadioButton; AName: PChar): TComponent; stdcall;
begin
  Result :=  AObj.FindComponent(AName);
end;

function RadioButton_GetNamePath(AObj: TRadioButton): PChar; stdcall;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure RadioButton_Assign(AObj: TRadioButton; Source: TPersistent); stdcall;
begin
  AObj.Assign(Source);
end;

procedure RadioButton_DisposeOf(AObj: TRadioButton); stdcall;
begin
  AObj.DisposeOf;
end;

function RadioButton_ClassType(AObj: TRadioButton): TClass; stdcall;
begin
  Result :=  AObj.ClassType;
end;

function RadioButton_ClassName(AObj: TRadioButton): PChar; stdcall;
begin
  Result :=  PChar(AObj.ClassName);
end;

function RadioButton_InstanceSize(AObj: TRadioButton): Integer; stdcall;
begin
  Result :=  AObj.InstanceSize;
end;

function RadioButton_InheritsFrom(AObj: TRadioButton; AClass: TClass): LongBool; stdcall;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function RadioButton_Equals(AObj: TRadioButton; Obj: TObject): LongBool; stdcall;
begin
  Result :=  AObj.Equals(Obj);
end;

function RadioButton_GetHashCode(AObj: TRadioButton): Integer; stdcall;
begin
  Result :=  AObj.GetHashCode;
end;

function RadioButton_ToString(AObj: TRadioButton): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToString);
end;

function RadioButton_GetAction(AObj: TRadioButton): TBasicAction; stdcall;
begin
  Result :=  AObj.Action;
end;

procedure RadioButton_SetAction(AObj: TRadioButton; AValue: TBasicAction); stdcall;
begin
  AObj.Action := AValue;
end;

function RadioButton_GetAlign(AObj: TRadioButton): TAlign; stdcall;
begin
  Result :=  AObj.Align;
end;

procedure RadioButton_SetAlign(AObj: TRadioButton; AValue: TAlign); stdcall;
begin
  AObj.Align := AValue;
end;

function RadioButton_GetAlignment(AObj: TRadioButton): TLeftRight; stdcall;
begin
  Result :=  AObj.Alignment;
end;

procedure RadioButton_SetAlignment(AObj: TRadioButton; AValue: TLeftRight); stdcall;
begin
  AObj.Alignment := AValue;
end;

function RadioButton_GetAnchors(AObj: TRadioButton): TAnchors; stdcall;
begin
  Result :=  AObj.Anchors;
end;

procedure RadioButton_SetAnchors(AObj: TRadioButton; AValue: TAnchors); stdcall;
begin
  AObj.Anchors := AValue;
end;

function RadioButton_GetBiDiMode(AObj: TRadioButton): TBiDiMode; stdcall;
begin
  Result :=  AObj.BiDiMode;
end;

procedure RadioButton_SetBiDiMode(AObj: TRadioButton; AValue: TBiDiMode); stdcall;
begin
  AObj.BiDiMode := AValue;
end;

function RadioButton_GetCaption(AObj: TRadioButton): PChar; stdcall;
begin
  Result :=  PChar(AObj.Caption);
end;

procedure RadioButton_SetCaption(AObj: TRadioButton; AValue: PChar); stdcall;
begin
  AObj.Caption := AValue;
end;

function RadioButton_GetChecked(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.Checked;
end;

procedure RadioButton_SetChecked(AObj: TRadioButton; AValue: LongBool); stdcall;
begin
  AObj.Checked := AValue;
end;

function RadioButton_GetColor(AObj: TRadioButton): TColor; stdcall;
begin
  Result :=  AObj.Color;
end;

procedure RadioButton_SetColor(AObj: TRadioButton; AValue: TColor); stdcall;
begin
  AObj.Color := AValue;
end;

function RadioButton_GetConstraints(AObj: TRadioButton): TSizeConstraints; stdcall;
begin
  Result :=  AObj.Constraints;
end;

procedure RadioButton_SetConstraints(AObj: TRadioButton; AValue: TSizeConstraints); stdcall;
begin
  AObj.Constraints := AValue;
end;

function RadioButton_GetCtl3D(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.Ctl3D;
end;

procedure RadioButton_SetCtl3D(AObj: TRadioButton; AValue: LongBool); stdcall;
begin
  AObj.Ctl3D := AValue;
end;

function RadioButton_GetDoubleBuffered(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure RadioButton_SetDoubleBuffered(AObj: TRadioButton; AValue: LongBool); stdcall;
begin
  AObj.DoubleBuffered := AValue;
end;

function RadioButton_GetDragCursor(AObj: TRadioButton): TCursor; stdcall;
begin
  Result :=  AObj.DragCursor;
end;

procedure RadioButton_SetDragCursor(AObj: TRadioButton; AValue: TCursor); stdcall;
begin
  AObj.DragCursor := AValue;
end;

function RadioButton_GetDragKind(AObj: TRadioButton): TDragKind; stdcall;
begin
  Result :=  AObj.DragKind;
end;

procedure RadioButton_SetDragKind(AObj: TRadioButton; AValue: TDragKind); stdcall;
begin
  AObj.DragKind := AValue;
end;

function RadioButton_GetDragMode(AObj: TRadioButton): TDragMode; stdcall;
begin
  Result :=  AObj.DragMode;
end;

procedure RadioButton_SetDragMode(AObj: TRadioButton; AValue: TDragMode); stdcall;
begin
  AObj.DragMode := AValue;
end;

function RadioButton_GetEnabled(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.Enabled;
end;

procedure RadioButton_SetEnabled(AObj: TRadioButton; AValue: LongBool); stdcall;
begin
  AObj.Enabled := AValue;
end;

function RadioButton_GetFont(AObj: TRadioButton): TFont; stdcall;
begin
  Result :=  AObj.Font;
end;

procedure RadioButton_SetFont(AObj: TRadioButton; AValue: TFont); stdcall;
begin
  AObj.Font := AValue;
end;

function RadioButton_GetParentColor(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.ParentColor;
end;

procedure RadioButton_SetParentColor(AObj: TRadioButton; AValue: LongBool); stdcall;
begin
  AObj.ParentColor := AValue;
end;

function RadioButton_GetParentCtl3D(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.ParentCtl3D;
end;

procedure RadioButton_SetParentCtl3D(AObj: TRadioButton; AValue: LongBool); stdcall;
begin
  AObj.ParentCtl3D := AValue;
end;

function RadioButton_GetParentDoubleBuffered(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure RadioButton_SetParentDoubleBuffered(AObj: TRadioButton; AValue: LongBool); stdcall;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function RadioButton_GetParentFont(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.ParentFont;
end;

procedure RadioButton_SetParentFont(AObj: TRadioButton; AValue: LongBool); stdcall;
begin
  AObj.ParentFont := AValue;
end;

function RadioButton_GetParentShowHint(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure RadioButton_SetParentShowHint(AObj: TRadioButton; AValue: LongBool); stdcall;
begin
  AObj.ParentShowHint := AValue;
end;

function RadioButton_GetPopupMenu(AObj: TRadioButton): TPopupMenu; stdcall;
begin
  Result :=  AObj.PopupMenu;
end;

procedure RadioButton_SetPopupMenu(AObj: TRadioButton; AValue: TPopupMenu); stdcall;
begin
  AObj.PopupMenu := AValue;
end;

function RadioButton_GetShowHint(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.ShowHint;
end;

procedure RadioButton_SetShowHint(AObj: TRadioButton; AValue: LongBool); stdcall;
begin
  AObj.ShowHint := AValue;
end;

function RadioButton_GetTabOrder(AObj: TRadioButton): TTabOrder; stdcall;
begin
  Result :=  AObj.TabOrder;
end;

procedure RadioButton_SetTabOrder(AObj: TRadioButton; AValue: TTabOrder); stdcall;
begin
  AObj.TabOrder := AValue;
end;

function RadioButton_GetTabStop(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.TabStop;
end;

procedure RadioButton_SetTabStop(AObj: TRadioButton; AValue: LongBool); stdcall;
begin
  AObj.TabStop := AValue;
end;

function RadioButton_GetVisible(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.Visible;
end;

procedure RadioButton_SetVisible(AObj: TRadioButton; AValue: LongBool); stdcall;
begin
  AObj.Visible := AValue;
end;

function RadioButton_GetWordWrap(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.WordWrap;
end;

procedure RadioButton_SetWordWrap(AObj: TRadioButton; AValue: LongBool); stdcall;
begin
  AObj.WordWrap := AValue;
end;

function RadioButton_GetStyleElements(AObj: TRadioButton): TStyleElements; stdcall;
begin
  Result :=  AObj.StyleElements;
end;

procedure RadioButton_SetStyleElements(AObj: TRadioButton; AValue: TStyleElements); stdcall;
begin
  AObj.StyleElements := AValue;
end;

procedure RadioButton_SetOnClick(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnContextPopup(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnDblClick(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnDragDrop(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnDragOver(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnEndDock(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnEndDrag(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnEnter(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnExit(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnKeyDown(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyDown := nil;
    TEventClass.Remove(AObj, @TEventClass.OnKeyDown);
    Exit;
  end;
  AObj.OnKeyDown := TEventClass.OnKeyDown;
  TEventClass.Add(AObj, @TEventClass.OnKeyDown, AEventId);
end;

procedure RadioButton_SetOnKeyPress(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyPress := nil;
    TEventClass.Remove(AObj, @TEventClass.OnKeyPress);
    Exit;
  end;
  AObj.OnKeyPress := TEventClass.OnKeyPress;
  TEventClass.Add(AObj, @TEventClass.OnKeyPress, AEventId);
end;

procedure RadioButton_SetOnKeyUp(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyUp := nil;
    TEventClass.Remove(AObj, @TEventClass.OnKeyUp);
    Exit;
  end;
  AObj.OnKeyUp := TEventClass.OnKeyUp;
  TEventClass.Add(AObj, @TEventClass.OnKeyUp, AEventId);
end;

procedure RadioButton_SetOnMouseActivate(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnMouseDown(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnMouseEnter(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnMouseLeave(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnMouseMove(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnMouseUp(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

procedure RadioButton_SetOnStartDock(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

function RadioButton_GetDockClientCount(AObj: TRadioButton): Integer; stdcall;
begin
  Result :=  AObj.DockClientCount;
end;

function RadioButton_GetDockSite(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.DockSite;
end;

procedure RadioButton_SetDockSite(AObj: TRadioButton; AValue: LongBool); stdcall;
begin
  AObj.DockSite := AValue;
end;

function RadioButton_GetAlignDisabled(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.AlignDisabled;
end;

function RadioButton_GetMouseInClient(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.MouseInClient;
end;

function RadioButton_GetVisibleDockClientCount(AObj: TRadioButton): Integer; stdcall;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function RadioButton_GetBrush(AObj: TRadioButton): TBrush; stdcall;
begin
  Result :=  AObj.Brush;
end;

function RadioButton_GetControlCount(AObj: TRadioButton): Integer; stdcall;
begin
  Result :=  AObj.ControlCount;
end;

function RadioButton_GetHandle(AObj: TRadioButton): HWND; stdcall;
begin
  Result :=  AObj.Handle;
end;

function RadioButton_GetParentWindow(AObj: TRadioButton): HWND; stdcall;
begin
  Result :=  AObj.ParentWindow;
end;

procedure RadioButton_SetParentWindow(AObj: TRadioButton; AValue: HWND); stdcall;
begin
  AObj.ParentWindow := AValue;
end;

function RadioButton_GetUseDockManager(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.UseDockManager;
end;

procedure RadioButton_SetUseDockManager(AObj: TRadioButton; AValue: LongBool); stdcall;
begin
  AObj.UseDockManager := AValue;
end;

procedure RadioButton_GetBoundsRect(AObj: TRadioButton; var Result: TRect); stdcall;
begin
  Result :=  AObj.BoundsRect;
end;

procedure RadioButton_SetBoundsRect(AObj: TRadioButton; var AValue: TRect); stdcall;
begin
  AObj.BoundsRect := AValue;
end;

function RadioButton_GetClientHeight(AObj: TRadioButton): Integer; stdcall;
begin
  Result :=  AObj.ClientHeight;
end;

procedure RadioButton_SetClientHeight(AObj: TRadioButton; AValue: Integer); stdcall;
begin
  AObj.ClientHeight := AValue;
end;

procedure RadioButton_GetClientOrigin(AObj: TRadioButton; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure RadioButton_GetClientRect(AObj: TRadioButton; var Result: TRect); stdcall;
begin
  Result :=  AObj.ClientRect;
end;

function RadioButton_GetClientWidth(AObj: TRadioButton): Integer; stdcall;
begin
  Result :=  AObj.ClientWidth;
end;

procedure RadioButton_SetClientWidth(AObj: TRadioButton; AValue: Integer); stdcall;
begin
  AObj.ClientWidth := AValue;
end;

function RadioButton_GetControlState(AObj: TRadioButton): TControlState; stdcall;
begin
  Result :=  AObj.ControlState;
end;

procedure RadioButton_SetControlState(AObj: TRadioButton; AValue: TControlState); stdcall;
begin
  AObj.ControlState := AValue;
end;

function RadioButton_GetControlStyle(AObj: TRadioButton): TControlStyle; stdcall;
begin
  Result :=  AObj.ControlStyle;
end;

procedure RadioButton_SetControlStyle(AObj: TRadioButton; AValue: TControlStyle); stdcall;
begin
  AObj.ControlStyle := AValue;
end;

function RadioButton_GetExplicitLeft(AObj: TRadioButton): Integer; stdcall;
begin
  Result :=  AObj.ExplicitLeft;
end;

function RadioButton_GetExplicitTop(AObj: TRadioButton): Integer; stdcall;
begin
  Result :=  AObj.ExplicitTop;
end;

function RadioButton_GetExplicitWidth(AObj: TRadioButton): Integer; stdcall;
begin
  Result :=  AObj.ExplicitWidth;
end;

function RadioButton_GetExplicitHeight(AObj: TRadioButton): Integer; stdcall;
begin
  Result :=  AObj.ExplicitHeight;
end;

function RadioButton_GetFloating(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.Floating;
end;

function RadioButton_GetParent(AObj: TRadioButton): TWinControl; stdcall;
begin
  Result :=  AObj.Parent;
end;

procedure RadioButton_SetParent(AObj: TRadioButton; AValue: TWinControl); stdcall;
begin
  AObj.Parent := AValue;
end;

procedure RadioButton_SetOnGesture(AObj: TRadioButton; AEventId: NativeUInt); stdcall;
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

function RadioButton_GetAlignWithMargins(AObj: TRadioButton): LongBool; stdcall;
begin
  Result :=  AObj.AlignWithMargins;
end;

procedure RadioButton_SetAlignWithMargins(AObj: TRadioButton; AValue: LongBool); stdcall;
begin
  AObj.AlignWithMargins := AValue;
end;

function RadioButton_GetLeft(AObj: TRadioButton): Integer; stdcall;
begin
  Result :=  AObj.Left;
end;

procedure RadioButton_SetLeft(AObj: TRadioButton; AValue: Integer); stdcall;
begin
  AObj.Left := AValue;
end;

function RadioButton_GetTop(AObj: TRadioButton): Integer; stdcall;
begin
  Result :=  AObj.Top;
end;

procedure RadioButton_SetTop(AObj: TRadioButton; AValue: Integer); stdcall;
begin
  AObj.Top := AValue;
end;

function RadioButton_GetWidth(AObj: TRadioButton): Integer; stdcall;
begin
  Result :=  AObj.Width;
end;

procedure RadioButton_SetWidth(AObj: TRadioButton; AValue: Integer); stdcall;
begin
  AObj.Width := AValue;
end;

function RadioButton_GetHeight(AObj: TRadioButton): Integer; stdcall;
begin
  Result :=  AObj.Height;
end;

procedure RadioButton_SetHeight(AObj: TRadioButton; AValue: Integer); stdcall;
begin
  AObj.Height := AValue;
end;

function RadioButton_GetCursor(AObj: TRadioButton): TCursor; stdcall;
begin
  Result :=  AObj.Cursor;
end;

procedure RadioButton_SetCursor(AObj: TRadioButton; AValue: TCursor); stdcall;
begin
  AObj.Cursor := AValue;
end;

function RadioButton_GetHint(AObj: TRadioButton): PChar; stdcall;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure RadioButton_SetHint(AObj: TRadioButton; AValue: PChar); stdcall;
begin
  AObj.Hint := AValue;
end;

function RadioButton_GetMargins(AObj: TRadioButton): TMargins; stdcall;
begin
  Result :=  AObj.Margins;
end;

procedure RadioButton_SetMargins(AObj: TRadioButton; AValue: TMargins); stdcall;
begin
  AObj.Margins := AValue;
end;

function RadioButton_GetCustomHint(AObj: TRadioButton): TCustomHint; stdcall;
begin
  Result :=  AObj.CustomHint;
end;

procedure RadioButton_SetCustomHint(AObj: TRadioButton; AValue: TCustomHint); stdcall;
begin
  AObj.CustomHint := AValue;
end;

function RadioButton_GetComponentCount(AObj: TRadioButton): Integer; stdcall;
begin
  Result :=  AObj.ComponentCount;
end;

function RadioButton_GetComponentIndex(AObj: TRadioButton): Integer; stdcall;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure RadioButton_SetComponentIndex(AObj: TRadioButton; AValue: Integer); stdcall;
begin
  AObj.ComponentIndex := AValue;
end;

function RadioButton_GetOwner(AObj: TRadioButton): TComponent; stdcall;
begin
  Result :=  AObj.Owner;
end;

function RadioButton_GetName(AObj: TRadioButton): PChar; stdcall;
begin
  Result :=  PChar(AObj.Name);
end;

procedure RadioButton_SetName(AObj: TRadioButton; AValue: PChar); stdcall;
begin
  AObj.Name := AValue;
end;

function RadioButton_GetTag(AObj: TRadioButton): NativeInt; stdcall;
begin
  Result :=  AObj.Tag;
end;

procedure RadioButton_SetTag(AObj: TRadioButton; AValue: NativeInt); stdcall;
begin
  AObj.Tag := AValue;
end;

function RadioButton_GetDockClients(AObj: TRadioButton; Index: Integer): TControl; stdcall;
begin
  Result :=  AObj.DockClients[Index];
end;

function RadioButton_GetControls(AObj: TRadioButton; Index: Integer): TControl; stdcall;
begin
  Result :=  AObj.Controls[Index];
end;

function RadioButton_GetComponents(AObj: TRadioButton; AIndex: Integer): TComponent; stdcall;
begin
  Result :=  AObj.Components[AIndex];
end;

function RadioButton_StaticClassType: TClass; stdcall;
begin
  Result := TRadioButton;
end;

exports
  RadioButton_Create,
  RadioButton_Free,
  RadioButton_CanFocus,
  RadioButton_ContainsControl,
  RadioButton_ControlAtPos,
  RadioButton_DisableAlign,
  RadioButton_EnableAlign,
  RadioButton_FindChildControl,
  RadioButton_FlipChildren,
  RadioButton_Focused,
  RadioButton_HandleAllocated,
  RadioButton_InsertControl,
  RadioButton_Invalidate,
  RadioButton_PaintTo,
  RadioButton_RemoveControl,
  RadioButton_Realign,
  RadioButton_Repaint,
  RadioButton_ScaleBy,
  RadioButton_ScrollBy,
  RadioButton_SetBounds,
  RadioButton_SetFocus,
  RadioButton_Update,
  RadioButton_UpdateControlState,
  RadioButton_BringToFront,
  RadioButton_ClientToScreen,
  RadioButton_ClientToParent,
  RadioButton_Dragging,
  RadioButton_HasParent,
  RadioButton_Hide,
  RadioButton_Perform,
  RadioButton_Refresh,
  RadioButton_ScreenToClient,
  RadioButton_ParentToClient,
  RadioButton_SendToBack,
  RadioButton_Show,
  RadioButton_GetTextBuf,
  RadioButton_GetTextLen,
  RadioButton_SetTextBuf,
  RadioButton_FindComponent,
  RadioButton_GetNamePath,
  RadioButton_Assign,
  RadioButton_DisposeOf,
  RadioButton_ClassType,
  RadioButton_ClassName,
  RadioButton_InstanceSize,
  RadioButton_InheritsFrom,
  RadioButton_Equals,
  RadioButton_GetHashCode,
  RadioButton_ToString,
  RadioButton_GetAction,
  RadioButton_SetAction,
  RadioButton_GetAlign,
  RadioButton_SetAlign,
  RadioButton_GetAlignment,
  RadioButton_SetAlignment,
  RadioButton_GetAnchors,
  RadioButton_SetAnchors,
  RadioButton_GetBiDiMode,
  RadioButton_SetBiDiMode,
  RadioButton_GetCaption,
  RadioButton_SetCaption,
  RadioButton_GetChecked,
  RadioButton_SetChecked,
  RadioButton_GetColor,
  RadioButton_SetColor,
  RadioButton_GetConstraints,
  RadioButton_SetConstraints,
  RadioButton_GetCtl3D,
  RadioButton_SetCtl3D,
  RadioButton_GetDoubleBuffered,
  RadioButton_SetDoubleBuffered,
  RadioButton_GetDragCursor,
  RadioButton_SetDragCursor,
  RadioButton_GetDragKind,
  RadioButton_SetDragKind,
  RadioButton_GetDragMode,
  RadioButton_SetDragMode,
  RadioButton_GetEnabled,
  RadioButton_SetEnabled,
  RadioButton_GetFont,
  RadioButton_SetFont,
  RadioButton_GetParentColor,
  RadioButton_SetParentColor,
  RadioButton_GetParentCtl3D,
  RadioButton_SetParentCtl3D,
  RadioButton_GetParentDoubleBuffered,
  RadioButton_SetParentDoubleBuffered,
  RadioButton_GetParentFont,
  RadioButton_SetParentFont,
  RadioButton_GetParentShowHint,
  RadioButton_SetParentShowHint,
  RadioButton_GetPopupMenu,
  RadioButton_SetPopupMenu,
  RadioButton_GetShowHint,
  RadioButton_SetShowHint,
  RadioButton_GetTabOrder,
  RadioButton_SetTabOrder,
  RadioButton_GetTabStop,
  RadioButton_SetTabStop,
  RadioButton_GetVisible,
  RadioButton_SetVisible,
  RadioButton_GetWordWrap,
  RadioButton_SetWordWrap,
  RadioButton_GetStyleElements,
  RadioButton_SetStyleElements,
  RadioButton_SetOnClick,
  RadioButton_SetOnContextPopup,
  RadioButton_SetOnDblClick,
  RadioButton_SetOnDragDrop,
  RadioButton_SetOnDragOver,
  RadioButton_SetOnEndDock,
  RadioButton_SetOnEndDrag,
  RadioButton_SetOnEnter,
  RadioButton_SetOnExit,
  RadioButton_SetOnKeyDown,
  RadioButton_SetOnKeyPress,
  RadioButton_SetOnKeyUp,
  RadioButton_SetOnMouseActivate,
  RadioButton_SetOnMouseDown,
  RadioButton_SetOnMouseEnter,
  RadioButton_SetOnMouseLeave,
  RadioButton_SetOnMouseMove,
  RadioButton_SetOnMouseUp,
  RadioButton_SetOnStartDock,
  RadioButton_GetDockClientCount,
  RadioButton_GetDockSite,
  RadioButton_SetDockSite,
  RadioButton_GetAlignDisabled,
  RadioButton_GetMouseInClient,
  RadioButton_GetVisibleDockClientCount,
  RadioButton_GetBrush,
  RadioButton_GetControlCount,
  RadioButton_GetHandle,
  RadioButton_GetParentWindow,
  RadioButton_SetParentWindow,
  RadioButton_GetUseDockManager,
  RadioButton_SetUseDockManager,
  RadioButton_GetBoundsRect,
  RadioButton_SetBoundsRect,
  RadioButton_GetClientHeight,
  RadioButton_SetClientHeight,
  RadioButton_GetClientOrigin,
  RadioButton_GetClientRect,
  RadioButton_GetClientWidth,
  RadioButton_SetClientWidth,
  RadioButton_GetControlState,
  RadioButton_SetControlState,
  RadioButton_GetControlStyle,
  RadioButton_SetControlStyle,
  RadioButton_GetExplicitLeft,
  RadioButton_GetExplicitTop,
  RadioButton_GetExplicitWidth,
  RadioButton_GetExplicitHeight,
  RadioButton_GetFloating,
  RadioButton_GetParent,
  RadioButton_SetParent,
  RadioButton_SetOnGesture,
  RadioButton_GetAlignWithMargins,
  RadioButton_SetAlignWithMargins,
  RadioButton_GetLeft,
  RadioButton_SetLeft,
  RadioButton_GetTop,
  RadioButton_SetTop,
  RadioButton_GetWidth,
  RadioButton_SetWidth,
  RadioButton_GetHeight,
  RadioButton_SetHeight,
  RadioButton_GetCursor,
  RadioButton_SetCursor,
  RadioButton_GetHint,
  RadioButton_SetHint,
  RadioButton_GetMargins,
  RadioButton_SetMargins,
  RadioButton_GetCustomHint,
  RadioButton_SetCustomHint,
  RadioButton_GetComponentCount,
  RadioButton_GetComponentIndex,
  RadioButton_SetComponentIndex,
  RadioButton_GetOwner,
  RadioButton_GetName,
  RadioButton_SetName,
  RadioButton_GetTag,
  RadioButton_SetTag,
  RadioButton_GetDockClients,
  RadioButton_GetControls,
  RadioButton_GetComponents,
  RadioButton_StaticClassType;

