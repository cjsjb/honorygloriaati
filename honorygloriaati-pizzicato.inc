        \context Staff = "track 3" << 
            \set Staff.instrumentName = "Pizzicato"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 3" {
                \override Voice.TextScript #'padding = #2.0                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble"
                \key e \minor
                r4 < b' e' > r < d' a' >  |
                r4 < c' e' > r2  |
                r4 < b' e' > r < a' d' >  |
                r4 < e' c' > r2  |
%% 5
                r4 < b' e' > r < a' d' >  |
                r4 < e' c' > r2  |
                r4 < b' e' > r < a' d' >  |
                r4 < e' c' > r2  |
                R1  |
                \bar "|."
            } % Voice
        >> % Staff
