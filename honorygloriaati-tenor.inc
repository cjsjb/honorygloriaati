        \context Staff = "tenor" \with { \consists Ambitus_engraver } <<
            \set Staff.instrumentName = "Tenor"
            \set Staff.shortInstrumentName = "T."
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voz-tenor" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble_8"
                \key e \minor
                R1*2  |
                r8 e e e fis fis 8. ~ fis 16 g 8 ~  |
                g 4 r8 g fis 4 dis  |
%% 5
                e 2 r  |
                R1  |
                r8 e e e fis fis 8. ~ fis 16 g 8 ~  |
                g 4 r8 g fis 4 dis  |
                e 1  |
                \bar "|."
            } % Voice
            \new Lyrics \lyricsto "voz-tenor" {
		"Ho" -- "nor" "y" "glo" -- "ria a" "ti," "Se" -- "ñor" "Je" -- "sús."
		"Ho" -- "nor" "y" "glo" -- "ria a" "ti," "Se" -- "ñor" "Je" -- "sús."
             } % Lyrics
        >> % Staff
