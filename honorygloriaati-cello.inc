        \context Staff = "track 1" << 
            \set Staff.instrumentName = "Cello"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 1" {
                \override Voice.TextScript #'padding = #2.0                \override MultiMeasureRest #'expand-limit = 1

                \clef "bass"
                \key e \minor
                e 2 d  |
                c 2 b,  |
                e 2 d  |
                c 2 b,  |
%% 5
                e 2 d  |
                c 2 b,  |
                e 2 d  |
                c 2 b,  |
                e 1  |
                \bar "|."
            } % Voice
        >> % Staff
