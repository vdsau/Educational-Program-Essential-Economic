object settings: Tsettings
  Left = 400
  Top = 264
  Align = alCustom
  BorderIcons = [biSystemMenu]
  BorderStyle = bsDialog
  Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1080
  ClientHeight = 215
  ClientWidth = 584
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  Scaled = False
  OnActivate = FormActivate
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 584
    Height = 113
    Align = alTop
    Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1072' '#1090#1077#1082#1089#1090#1072
    TabOrder = 0
    object Label1: TLabel
      Left = 24
      Top = 40
      Width = 79
      Height = 13
      Caption = #1056#1072#1079#1084#1077#1088' '#1090#1077#1082#1089#1090#1072':'
    end
    object test_text: TLabel
      Left = 180
      Top = 48
      Width = 30
      Height = 13
      Caption = #1058#1077#1082#1089#1090
    end
    object Bevel1: TBevel
      Left = 2
      Top = 15
      Width = 319
      Height = 96
      Align = alLeft
      Style = bsRaised
    end
    object Bevel2: TBevel
      Left = 320
      Top = 15
      Width = 262
      Height = 96
      Align = alRight
      Style = bsRaised
    end
    object Label2: TLabel
      Left = 368
      Top = 32
      Width = 65
      Height = 13
      Caption = #1062#1074#1077#1090' '#1090#1077#1082#1089#1090#1072':'
    end
    object Shape1: TShape
      Left = 504
      Top = 32
      Width = 65
      Height = 65
    end
    object ScrollBar1: TScrollBar
      Left = 24
      Top = 80
      Width = 121
      Height = 17
      Max = 30
      Min = 8
      PageSize = 0
      Position = 8
      TabOrder = 0
      OnChange = ScrollBar1Change
    end
    object ComboBox1: TComboBox
      Left = 344
      Top = 64
      Width = 145
      Height = 21
      ItemHeight = 13
      TabOrder = 1
      OnChange = ComboBox1Change
      Items.Strings = (
        #1050#1088#1072#1089#1085#1099#1081' '
        #1057#1080#1085#1080#1081' '
        #1047#1077#1083#1105#1085#1099#1081' '
        #1046#1105#1083#1090#1099#1081
        #1063#1105#1088#1085#1099#1081' '
        #1041#1077#1083#1099#1081)
    end
  end
  object accept: TBitBtn
    Left = 360
    Top = 152
    Width = 75
    Height = 25
    TabOrder = 1
    OnClick = acceptClick
    Kind = bkOK
  end
  object cancel: TBitBtn
    Left = 472
    Top = 152
    Width = 75
    Height = 25
    TabOrder = 2
    OnClick = cancelClick
    Kind = bkCancel
  end
  object GroupBox2: TGroupBox
    Left = 0
    Top = 113
    Width = 321
    Height = 96
    Align = alCustom
    Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1072' '#1079#1072#1076#1085#1077#1075#1086' '#1092#1086#1085#1072
    TabOrder = 3
    object Label3: TLabel
      Left = 24
      Top = 24
      Width = 101
      Height = 13
      Caption = #1062#1074#1077#1090' '#1079#1072#1076#1085#1077#1075#1086' '#1092#1086#1085#1072':'
    end
    object Shape2: TShape
      Left = 224
      Top = 16
      Width = 65
      Height = 65
    end
    object ComboBox2: TComboBox
      Left = 24
      Top = 56
      Width = 169
      Height = 21
      ItemHeight = 13
      TabOrder = 0
      OnChange = ComboBox2Change
      Items.Strings = (
        #1050#1088#1072#1089#1085#1099#1081' '
        #1057#1080#1085#1080#1081' '
        #1047#1077#1083#1105#1085#1099#1081' '
        #1046#1105#1083#1090#1099#1081
        #1063#1105#1088#1085#1099#1081' '
        #1041#1077#1083#1099#1081)
    end
  end
end
