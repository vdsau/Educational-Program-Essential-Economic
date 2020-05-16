object human_form: Thuman_form
  Left = 274
  Top = 178
  Width = 725
  Height = 412
  Caption = #1058#1077#1093#1085#1080#1082#1086'-'#1101#1082#1086#1085#1086#1084#1080#1095#1077#1089#1082#1080#1077' '#1087#1086#1082#1072#1079#1072#1090#1077#1083#1080' '#1090#1088#1091#1076#1072' '#1080' '#1086#1087#1083#1072#1090#1099
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 248
    Top = 8
    Width = 219
    Height = 32
    Caption = #1042#1099#1073#1088#1080#1090#1077' '#1088#1072#1089#1095#1105#1090':'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -29
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object BitBtn1: TBitBtn
    Left = 520
    Top = 328
    Width = 75
    Height = 25
    TabOrder = 0
    OnClick = BitBtn1Click
    Kind = bkOK
  end
  object BitBtn2: TBitBtn
    Left = 608
    Top = 328
    Width = 75
    Height = 25
    TabOrder = 1
    OnClick = BitBtn2Click
    Kind = bkCancel
  end
  object lb: TListBox
    Left = 24
    Top = 48
    Width = 665
    Height = 249
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ItemHeight = 22
    Items.Strings = (
      #1055#1086#1082#1072#1079#1072#1090#1077#1083#1080' '#1087#1088#1086#1076#1091#1082#1090#1080#1074#1085#1086#1089#1090#1080' '#1090#1088#1091#1076#1072
      #1063#1080#1089#1083#1077#1085#1085#1086#1089#1090#1100' '#1088#1072#1073#1086#1090#1072#1102#1097#1080#1093' '#1079#1072' '#1082#1072#1090#1077#1075#1086#1088#1080#1103#1084#1080
      
        #1043#1086#1076#1086#1074#1086#1081' '#1092#1086#1085#1076' '#1079'/'#1087' '#1088#1072#1073#1086#1095#1080#1093' '#1080' '#1089#1088#1077#1076#1085#1077#1084#1077#1089#1103#1095#1085#1086#1081' '#1079'/'#1087' 1 '#1088#1072#1073#1086#1095#1077#1075#1086' '#1087#1086'  '#1082#1072#1090 +
        #1077#1075#1086#1088#1080#1103#1084)
    ParentFont = False
    TabOrder = 2
  end
end
