object Form1: TForm1
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'kojd_kilitkirici'
  ClientHeight = 83
  ClientWidth = 317
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 72
    Height = 13
    Caption = 'baslangic sifre:'
  end
  object Label2: TLabel
    Left = 8
    Top = 55
    Width = 146
    Height = 13
    Caption = 'bulunan muhtemel sifre araligi:'
  end
  object Label3: TLabel
    Left = 231
    Top = 55
    Width = 8
    Height = 13
    Caption = '~'
  end
  object Label4: TLabel
    Left = 231
    Top = 8
    Width = 43
    Height = 13
    Caption = 'bekleme:'
  end
  object Edit1: TEdit
    Left = 92
    Top = 5
    Width = 67
    Height = 21
    TabOrder = 0
    Text = '00000000'
  end
  object Edit2: TEdit
    Left = 160
    Top = 52
    Width = 65
    Height = 21
    TabOrder = 1
    Text = '00000000'
  end
  object Edit3: TEdit
    Left = 245
    Top = 52
    Width = 65
    Height = 21
    TabOrder = 2
    Text = '00000000'
  end
  object CheckBox1: TCheckBox
    Left = 8
    Top = 32
    Width = 57
    Height = 17
    Caption = 'baslat'
    TabOrder = 3
    OnClick = CheckBox1Click
  end
  object Edit4: TEdit
    Left = 280
    Top = 5
    Width = 30
    Height = 21
    TabOrder = 4
    Text = '50'
  end
end
