\context Staff = "Soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voice 2" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key e \minor

		R2.*7  |

		r4. r8 b b  |
		b' 4 b' 8 a' 4 a' 8  |
		%% 10
		b' 8 g' 4 ~ g' g' 8  |
		fis' 4 fis' 8 e' fis' e'  |
		dis' 4. ~ dis' 4 b 8  |
		a' 4 a' 8 a' g' fis'  |
		g' 8 b' 4 ~ b' r8  |
		%% 15
		g' 8 g' g' a' g' a'  |
		b' 4. ~ b' 4 b 8  |
		a' 4 a' 8 a' g' fis'  |
		g' 8 e' 4 ~ e' r8  |
		g' 8 fis' e' fis' e' dis'  |
		%% 20
		e' 4. ~ e' 8 b b  |
		b' 4 b' 8 a' 4 a' 8  |
		b' 8 g' 4 ~ g' g' 8  |
		fis' 4 fis' 8 e' fis' e'  |
		dis' 4. ~ dis' 4 b 8  |
		%% 25
		a' 4 a' 8 a' g' fis'  |
		g' 8 b' 4 ~ b' r8  |
		g' 8 g' g' a' g' a'  |
		b' 4. ~ b' 4 b 8  |
		a' 4 a' 8 a' g' fis'  |
		%% 30
		g' 8 e' 4 ~ e' r8  |
		g' 8 fis' e' fis' e' dis'  |
		e' 4. ~ e' 8 r4  |
		d' 8 fis' a' c'' b' a'  |
		b' 4. ~ b' 8 r4  |
		%% 35
		a' 8 a' b' c'' b' a'  |
		b' 4. ~ b' 8 r4  |
		a' 8 a' a' a' g' fis'  |
		g' 8 g' g' g' fis' e'  |
		fis' 8 fis' fis' fis' g' a'  |
		%% 40
		b' 4. ~ b' 8 r4  |
		a' 8 a' b' c'' b' a'  |
		e'' 8 b' b' e'' b' b'  |
		b' 8 c'' b' a' g' fis'  |
		e' 4. ~ e' 8 r4  |
		%% 45
		d' 8 fis' a' c'' b' a'  |
		b' 4. ~ b' 8 r4  |
		a' 8 a' b' c'' b' a'  |
		b' 4. ~ b' 8 r4  |
		a' 8 a' a' a' g' fis'  |
		%% 50
		g' 8 g' g' g' fis' e'  |
		fis' 8 fis' fis' fis' g' a'  |
		b' 4. ~ b' 8 r4  |
		a' 8 a' b' c'' b' a'  |
		e'' 8 b' b' e'' b' b'  |
		%% 55
		b' 8 c'' b' a' g' fis'  |
		e' 4. ~ e' 8 r4  |
		b' 8 b' b' b' b' b'  |
		b' 8 b' b' b' b' b'  |
		b' 8 b' b' b' d'' c''  |
		%% 60
		b' 4. ~ b' 8 r4  |
		a' 8 a' b' c'' b' a'  |
		e'' 8 b' b' e'' b' r  |
		dis'' 4. dis''  |
		e'' 4. ~ e'' 4 r8  |
		%% 65
		R2.*2  |
		r4 dis'' dis''  |
		e'' 2. ~  |
		e'' 8 r4 r4.  |
		\bar "|."
	} % Voice
	\lyricsto "voice 2" \new Lyrics \lyricmode {
		¡Ay, qué pe -- na, ay, qué pe -- na! __
		Se "me ha a" -- pa -- ga "do el" fa -- rol,
		fa -- rol "que ha" bí -- "a en" -- cen -- di -- do __
		pa -- "ra a" -- lum -- brar -- te, Se -- ñor, __
		en es -- "te os" -- cu -- ro pe -- se -- bre __
		don -- de "te en" cuen -- tras -- "mi a" -- mor. __

		¡Ay, qué pe -- na, ay, qué pe -- na! __
		Se "me ha a" -- pa -- ga "do el" fa -- rol,
		fa -- rol "que ha" bí -- "a en" -- cen -- di -- do __
		pa -- "ra a" -- lum -- brar -- te, Se -- ñor, __
		en es -- "te os" -- cu -- ro pe -- se -- bre __
		don -- de "te en" cuen -- tras -- "mi a" -- mor. __

		Pe -- ro "qué im" -- por -- "ta el" fa -- rol, __
		pa -- ra qué sir -- ve su luz, __
		"si e" -- sos o -- ji -- tos ri -- sue -- ños
		son dos lu -- ce -- ri -- tos "que o" -- pa -- can al Sol, __
		"si e" -- sos o -- ji -- tos ri -- sue -- ños,
		ri -- sue -- ños y lin -- dos o -- pa -- can al Sol. __

		Pe -- ro "qué im" -- por -- "ta el" fa -- rol, __
		pa -- ra qué sir -- ve su luz, __
		"si e" -- sos o -- ji -- tos ri -- sue -- ños
		son dos lu -- ce -- ri -- tos "que o" -- pa -- can al Sol, __
		"si e" -- sos o -- ji -- tos ri -- sue -- ños,
		ri -- sue -- ños y lin -- dos o -- pa -- can al Sol. __

		Pe -- na, qué pe -- na, qué pe -- na, qué pe -- na, que
		"se ha" -- "ya a" -- pa -- ga -- "do el" fa -- rol, __
		pe -- ro tu lin -- da mi -- ra -- "da i" -- lu -- mi -- na
		más "que el" Sol. __
		"...Más" "que el" Sol. __
	}
>> % Staff ends
