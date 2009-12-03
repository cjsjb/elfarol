\context Staff = "Requinto" <<
	\set Staff.instrumentName = "Requinto"
	\set Staff.shortInstrumentName = "R."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voice 1" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key e \minor

		a' 8 a' a' a' 16 g' fis' 8 a'  |
		g' 8 g' g' g' 16 fis' e' 8 g'  |
		fis' 8 b' fis' b' fis' b'  |
		g' 8 g' 16 a' b' 8 ~ b' 4.  |
		%% 5
		a' 8 a' a' a' 16 g' fis' 8 a'  |
		g' 8 g' g' g' 16 fis' e' 8 g'  |
		fis' 8 fis' fis' fis' e' dis'  |
		e' 2.  |
		R2.*56  |
		%% 65
		a' 8 a' a' a' 16 g' fis' 8 a'  |
		g' 8 g' g' g' 16 fis' e' 8 e'  |
		dis' 4 dis' dis'  |
		e' 2. ~  |
		e' 8 r r r4.  |
		\bar "|."
	} % Voice
>> % Staff ends
