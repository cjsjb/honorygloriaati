        \context Staff = "soprano" \with { \consists Ambitus_engraver } <<
            \set Staff.instrumentName = "Soprano"
            \set Staff.shortInstrumentName = "S."
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voz-soprano" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble"
                \key e \minor
                R1*4  |
%% 5
                r8 b' b' b' a' a' 8. ~ a' 16 g' 8 ~  |
                g' 4 r8 g' fis' 4 dis'  |
                e' 2 r  |
                r4 r8 g' fis' 4 g'  |
                g' 1  |
                \bar "|."
            } % Voice
            \new Lyrics \lyricsto "voz-soprano" {
		"Ho" -- "nor" "y" "glo" -- "ria a" "ti," "Se" -- "ñor" "Je" -- "sús."
		"...Se" -- "ñor" "Je" -- "sús."
             } % Lyrics
        >> % Staff
