\context Staff = "Mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voice 3" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key e \minor

		R2.*7  |
		r4. r8 b b  |
		g' 4 g' 8 fis' 4 fis' 8  |
		%% 10
		g' 8 e' 4 ~ e' e' 8  |
		c' 4 c' 8 c' c' c'  |
		b 4. ~ b 4 b 8  |
		fis' 4 fis' 8 fis' e' dis'  |
		e' 8 g' 4 ~ g' r8  |
		%% 15
		e' 8 e' e' e' e' e'  |
		dis' 4. ~ dis' 4 b 8  |
		fis' 4 fis' 8 fis' e' dis'  |
		e' 8 b 4 ~ b r8  |
		g' 8 fis' e' fis' e' dis'  |
		%% 20
		e' 4. ~ e' 8 b b  |
		g' 4 g' 8 fis' 4 fis' 8  |
		g' 8 e' 4 ~ e' e' 8  |
		c' 4 c' 8 c' c' c'  |
		b 4. ~ b 4 b 8  |
		%% 25
		fis' 4 fis' 8 fis' e' dis'  |
		e' 8 g' 4 ~ g' r8  |
		e' 8 e' e' e' e' e'  |
		dis' 4. ~ dis' 4 b 8  |
		fis' 4 fis' 8 fis' e' dis'  |
		%% 30
		e' 8 b 4 ~ b r8  |
		g' 8 fis' e' fis' e' dis'  |
		e' 4. ~ e' 8 r4  |
		d' 8 d' fis' a' g' fis'  |
		g' 4. ~ g' 8 r4  |
		%% 35
		fis' 8 fis' g' a' g' fis'  |
		g' 4. ~ g' 8 r4  |
		fis' 8 fis' fis' fis' e' dis'  |
		e' 8 e' e' e' dis' cis'  |
		dis' 8 dis' dis' dis' e' fis'  |
		%% 40
		g' 4. ~ g' 8 r4  |
		e' 8 e' e' a' g' fis'  |
		g' 8 g' g' g' g' g'  |
		fis' 8 fis' fis' fis' e' dis'  |
		e' 4. ~ e' 8 r4  |
		%% 45
		d' 8 d' fis' a' g' fis'  |
		g' 4. ~ g' 8 r4  |
		fis' 8 fis' g' a' g' fis'  |
		g' 4. ~ g' 8 r4  |
		fis' 8 fis' fis' fis' e' dis'  |
		%% 50
		e' 8 e' e' e' dis' cis'  |
		dis' 8 dis' dis' dis' e' fis'  |
		g' 4. ~ g' 8 r4  |
		e' 8 e' e' a' g' fis'  |
		g' 8 g' g' g' g' g'  |
		%% 55
		fis' 8 fis' fis' fis' e' dis'  |
		e' 4. ~ e' 8 r4  |
		dis' 8 dis' e' fis' e' dis'  |
		e' 8 e' fis' g' fis' e'  |
		fis' 8 fis' g' a' g' fis'  |
		%% 60
		g' 4. ~ g' 8 r4  |
		e' 8 e' e' a' g' fis'  |
		g' 8 e' e' g' e' r  |
		fis' 4. fis'  |
		g' 4. ~ g' 4 r8  |
		%% 65
		R2.*2  |
		r4 fis' a'  |
		g' 2. ~  |
		g' 8 r4 r4.  |
		\bar "|."
	} % Voice
	\lyricsto "voice 3" \new Lyrics \lyricmode {
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
