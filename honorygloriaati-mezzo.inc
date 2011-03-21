        \context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
            \set Staff.instrumentName = "Mezzosoprano"
            \set Staff.shortInstrumentName = "M."
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "mezzo" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble"
                \key e \minor
                R1*2  |
%% 5
                r8 e' e' e' d' d' 8. ~ d' 16 c' 8 ~  |
                c' 4 r8 c' b 4 b  |
                b 2 r  |
		R1  |
                r8 e' e' e' d' d' 8. ~ d' 16 c' 8 ~  |
                c' 4 r8 c' b 4 b  |
                b 1  |
                \bar "|."
            } % Voice
            \lyricsto "mezzo" \new Lyrics \lyricmode {
		"Ho" -- "nor" "y" "glo" -- "ria a" "ti," "Se" -- "ñor" "Je" -- "sús."
		"Ho" -- "nor" "y" "glo" -- "ria a" "ti," "Se" -- "ñor" "Je" -- "sús."
             } % Lyrics
        >> % Staff
