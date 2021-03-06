
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function Strings_Create: TStrings; extdecl;
begin
  Result :=  TStrings.Create;
end;

procedure Strings_Free(AObj: TStrings); extdecl;
begin
  AObj.Free;
end;

function Strings_Add(AObj: TStrings; S: PChar): Integer; extdecl;
begin
  Result :=  AObj.Add(S);
end;

function Strings_AddObject(AObj: TStrings; S: PChar; AObject: TObject): Integer; extdecl;
begin
  Result :=  AObj.AddObject(S, AObject);
end;

procedure Strings_Append(AObj: TStrings; S: PChar); extdecl;
begin
  AObj.Append(S);
end;

procedure Strings_Assign(AObj: TStrings; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

procedure Strings_BeginUpdate(AObj: TStrings); extdecl;
begin
  AObj.BeginUpdate;
end;

procedure Strings_Clear(AObj: TStrings); extdecl;
begin
  AObj.Clear;
end;

procedure Strings_Delete(AObj: TStrings; Index: Integer); extdecl;
begin
  AObj.Delete(Index);
end;

procedure Strings_EndUpdate(AObj: TStrings); extdecl;
begin
  AObj.EndUpdate;
end;

function Strings_Equals(AObj: TStrings; Strings: TStrings): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Strings);
end;

function Strings_IndexOf(AObj: TStrings; S: PChar): Integer; extdecl;
begin
  Result :=  AObj.IndexOf(S);
end;

function Strings_IndexOfName(AObj: TStrings; Name: PChar): Integer; extdecl;
begin
  Result :=  AObj.IndexOfName(Name);
end;

function Strings_IndexOfObject(AObj: TStrings; AObject: TObject): Integer; extdecl;
begin
  Result :=  AObj.IndexOfObject(AObject);
end;

procedure Strings_Insert(AObj: TStrings; Index: Integer; S: PChar); extdecl;
begin
  AObj.Insert(Index, S);
end;

procedure Strings_InsertObject(AObj: TStrings; Index: Integer; S: PChar; AObject: TObject); extdecl;
begin
  AObj.InsertObject(Index, S, AObject);
end;

procedure Strings_LoadFromFile(AObj: TStrings; FileName: PChar); extdecl;
begin
  AObj.LoadFromFile(FileName);
end;

procedure Strings_LoadFromStream(AObj: TStrings; Stream: TStream); extdecl;
begin
  AObj.LoadFromStream(Stream);
end;

procedure Strings_Move(AObj: TStrings; CurIndex: Integer; NewIndex: Integer); extdecl;
begin
  AObj.Move(CurIndex, NewIndex);
end;

procedure Strings_SaveToFile(AObj: TStrings; FileName: PChar); extdecl;
begin
  AObj.SaveToFile(FileName);
end;

procedure Strings_SaveToStream(AObj: TStrings; Stream: TStream); extdecl;
begin
  AObj.SaveToStream(Stream);
end;

function Strings_GetNamePath(AObj: TStrings): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

function Strings_ClassType(AObj: TStrings): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function Strings_ClassName(AObj: TStrings): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function Strings_InstanceSize(AObj: TStrings): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function Strings_InheritsFrom(AObj: TStrings; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function Strings_GetHashCode(AObj: TStrings): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Strings_ToString(AObj: TStrings): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function Strings_GetCapacity(AObj: TStrings): Integer; extdecl;
begin
  Result :=  AObj.Capacity;
end;

procedure Strings_SetCapacity(AObj: TStrings; AValue: Integer); extdecl;
begin
  AObj.Capacity := AValue;
end;

function Strings_GetCommaText(AObj: TStrings): PChar; extdecl;
begin
  Result :=  PChar(AObj.CommaText);
end;

procedure Strings_SetCommaText(AObj: TStrings; AValue: PChar); extdecl;
begin
  AObj.CommaText := AValue;
end;

function Strings_GetCount(AObj: TStrings): Integer; extdecl;
begin
  Result :=  AObj.Count;
end;

function Strings_GetDelimiter(AObj: TStrings): Char; extdecl;
begin
  Result :=  AObj.Delimiter;
end;

procedure Strings_SetDelimiter(AObj: TStrings; AValue: Char); extdecl;
begin
  AObj.Delimiter := AValue;
end;

function Strings_GetText(AObj: TStrings): PChar; extdecl;
begin
  Result :=  PChar(AObj.Text);
end;

procedure Strings_SetText(AObj: TStrings; AValue: PChar); extdecl;
begin
  AObj.Text := AValue;
end;

function Strings_GetObjects(AObj: TStrings; Index: Integer): TObject; extdecl;
begin
  Result :=  AObj.Objects[Index];
end;

procedure Strings_SetObjects(AObj: TStrings; Index: Integer; AValue: TObject); extdecl;
begin
  AObj.Objects[Index] := AValue;
end;

function Strings_GetValues(AObj: TStrings; Name: PChar): PChar; extdecl;
begin
  Result :=  PChar(AObj.Values[Name]);
end;

procedure Strings_SetValues(AObj: TStrings; Name: string; AValue: PChar); extdecl;
begin
  AObj.Values[Name] := AValue;
end;

function Strings_GetValueFromIndex(AObj: TStrings; Index: Integer): PChar; extdecl;
begin
  Result :=  PChar(AObj.ValueFromIndex[Index]);
end;

procedure Strings_SetValueFromIndex(AObj: TStrings; Index: Integer; AValue: PChar); extdecl;
begin
  AObj.ValueFromIndex[Index] := AValue;
end;

function Strings_GetStrings(AObj: TStrings; Index: Integer): PChar; extdecl;
begin
  Result :=  PChar(AObj.Strings[Index]);
end;

procedure Strings_SetStrings(AObj: TStrings; Index: Integer; AValue: PChar); extdecl;
begin
  AObj.Strings[Index] := AValue;
end;

function Strings_StaticClassType: TClass; extdecl;
begin
  Result := TStrings;
end;

exports
  Strings_Create,
  Strings_Free,
  Strings_Add,
  Strings_AddObject,
  Strings_Append,
  Strings_Assign,
  Strings_BeginUpdate,
  Strings_Clear,
  Strings_Delete,
  Strings_EndUpdate,
  Strings_Equals,
  Strings_IndexOf,
  Strings_IndexOfName,
  Strings_IndexOfObject,
  Strings_Insert,
  Strings_InsertObject,
  Strings_LoadFromFile,
  Strings_LoadFromStream,
  Strings_Move,
  Strings_SaveToFile,
  Strings_SaveToStream,
  Strings_GetNamePath,
  Strings_ClassType,
  Strings_ClassName,
  Strings_InstanceSize,
  Strings_InheritsFrom,
  Strings_GetHashCode,
  Strings_ToString,
  Strings_GetCapacity,
  Strings_SetCapacity,
  Strings_GetCommaText,
  Strings_SetCommaText,
  Strings_GetCount,
  Strings_GetDelimiter,
  Strings_SetDelimiter,
  Strings_GetText,
  Strings_SetText,
  Strings_GetObjects,
  Strings_SetObjects,
  Strings_GetValues,
  Strings_SetValues,
  Strings_GetValueFromIndex,
  Strings_SetValueFromIndex,
  Strings_GetStrings,
  Strings_SetStrings,
  Strings_StaticClassType;

