[Setup]
AppName=Tic Tac Toe Game
AppVersion=1.0
DefaultDirName={pf}\TicTacToeGame
DefaultGroupName=TicTacToe
OutputBaseFilename=TicTacToe_Setup
Compression=lzma
SolidCompression=yes
SetupIconFile=M:\Final_repo_OmarNasr\TicTacToe_Embedded2027\TicTacToeInstaller_V1.0\icon.ico

[Files]
; Main executable
Source: "M:\Final_repo_OmarNasr\TicTacToe_Embedded2027\TicTacToeInstaller_V1.0\test_0.exe"; DestDir: "{app}"; Flags: ignoreversion

; All required DLLs
Source: "M:\Final_repo_OmarNasr\TicTacToe_Embedded2027\TicTacToeInstaller_V1.0\Qt6*.dll"; DestDir: "{app}"; Flags: ignoreversion

; Qt plugin folders
Source: "M:\Final_repo_OmarNasr\TicTacToe_Embedded2027\TicTacToeInstaller_V1.0\platforms\*"; DestDir: "{app}\platforms"; Flags: ignoreversion recursesubdirs
Source: "M:\Final_repo_OmarNasr\TicTacToe_Embedded2027\TicTacToeInstaller_V1.0\styles\*"; DestDir: "{app}\styles"; Flags: ignoreversion recursesubdirs
Source: "M:\Final_repo_OmarNasr\TicTacToe_Embedded2027\TicTacToeInstaller_V1.0\translations\*"; DestDir: "{app}\translations"; Flags: ignoreversion recursesubdirs

; Your icon file (used by shortcut)
Source: "M:\Final_repo_OmarNasr\TicTacToe_Embedded2027\TicTacToeInstaller_V1.0\icon.ico"; DestDir: "{app}"; Flags: ignoreversion

; Your SQLite database file
Source: "M:\Final_repo_OmarNasr\TicTacToe_Embedded2027\TicTacToeInstaller_V1.0\db\DATA.db"; DestDir: "{app}\db"; Flags: ignoreversion

[Icons]
Name: "{group}\Tic Tac Toe Game"; Filename: "{app}\test_0.exe"; IconFilename: "{app}\icon.ico"
Name: "{group}\Uninstall Tic Tac Toe Game"; Filename: "{uninstallexe}"
