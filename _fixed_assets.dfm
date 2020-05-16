object fixed_assets: Tfixed_assets
  Left = 258
  Top = 166
  Width = 655
  Height = 482
  Caption = #1058#1077#1093#1085#1080#1082#1086'-'#1101#1082#1086#1085#1086#1084#1080#1095#1077#1089#1082#1080#1077' '#1087#1086#1082#1072#1079#1072#1090#1077#1083#1080' '#1087#1088#1086#1080#1079#1074#1086#1076#1089#1090#1074#1072
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = False
  Position = poMainFormCenter
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 208
    Top = 16
    Width = 255
    Height = 36
    Caption = #1042#1099#1073#1077#1088#1080#1090#1077' '#1088#1072#1089#1095#1105#1090':'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object BitBtn1: TBitBtn
    Left = 464
    Top = 408
    Width = 75
    Height = 25
    TabOrder = 0
    OnClick = BitBtn1Click
    Kind = bkOK
  end
  object BitBtn2: TBitBtn
    Left = 544
    Top = 408
    Width = 75
    Height = 25
    TabOrder = 1
    OnClick = BitBtn2Click
    Kind = bkCancel
  end
  object lb: TListBox
    Left = 16
    Top = 64
    Width = 609
    Height = 329
    Align = alCustom
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ItemHeight = 17
    Items.Strings = (
      #1054#1089#1085#1086#1074#1085#1099#1077' '#1089#1088#1077#1076#1089#1090#1074#1072
      
        #1055#1086#1082#1072#1079#1072#1090#1077#1083#1080' '#1077#1092#1092#1077#1082#1090#1080#1074#1085#1086#1089#1090#1080' '#1080#1089#1087#1086#1083#1100#1079#1086#1074#1072#1085#1080#1103' '#1086#1089#1085#1086#1074#1085#1099#1093' '#1092#1086#1085#1076#1086#1074' '#1085#1072' '#1087#1088#1077#1076#1087#1088 +
        #1080#1103#1090#1080#1080
      #1055#1086#1082#1072#1079#1072#1090#1077#1083#1080' '#1077#1092#1092#1077#1082#1090#1080#1074#1085#1086#1089#1090#1080' '#1091#1095#1088#1077#1078#1076#1077#1085#1080#1103' '#1085#1086#1074#1086#1081' '#1090#1077#1093#1085#1080#1082#1080
      #1045#1092#1092#1077#1082#1090#1080#1074#1085#1086#1089#1090#1100' '#1086#1090' '#1087#1086#1074#1099#1096#1077#1085#1080#1103' '#1082#1072#1095#1077#1089#1090#1074#1072' '#1087#1088#1086#1076#1091#1082#1094#1080#1080)
    ParentFont = False
    TabOrder = 2
  end
end
