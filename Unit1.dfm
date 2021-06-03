object Form1: TForm1
  Left = -1194
  Top = 127
  Width = 672
  Height = 393
  Caption = 'Tic Tac Toe'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object ImageArea1: TImage
    Left = 24
    Top = 24
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = ImageArea1Click
  end
  object ImageArea2: TImage
    Left = 120
    Top = 24
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = ImageArea2Click
  end
  object ImageArea3: TImage
    Left = 216
    Top = 24
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = ImageArea3Click
  end
  object ImageArea4: TImage
    Left = 24
    Top = 120
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = ImageArea4Click
  end
  object ImageArea5: TImage
    Left = 120
    Top = 120
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = ImageArea5Click
  end
  object ImageArea6: TImage
    Left = 216
    Top = 120
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = ImageArea6Click
  end
  object ImageArea7: TImage
    Left = 24
    Top = 216
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = ImageArea7Click
  end
  object ImageArea8: TImage
    Left = 120
    Top = 216
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = ImageArea8Click
  end
  object ImageArea9: TImage
    Left = 216
    Top = 216
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = ImageArea9Click
  end
  object LabelPlayersTurn: TLabel
    Left = 360
    Top = 56
    Width = 183
    Height = 36
    Caption = 'Player'#39's Turn:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -31
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object ImageTurn: TImage
    Left = 560
    Top = 56
    Width = 30
    Height = 30
  end
  object ButtonRestart: TButton
    Left = 384
    Top = 160
    Width = 137
    Height = 49
    Cursor = crHandPoint
    Caption = 'Restart'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -31
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = FormCreate
  end
end
