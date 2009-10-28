        \context Staff = "track 2" << 
            \set Staff.instrumentName = "Cuerdas"
            \set Staff.shortInstrumentName = "C."
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 2" {
                \override Voice.TextScript #'padding = #2.0                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble"
                \key e \minor
                < g' e' b' > 2 < d' fis' a' >  |
                < c' e' g' > 2 < b dis' fis' a' >  |
                < g' b' e'' > 2 < d'' a' fis' >  |
                < c'' g' e' > 2 < b' fis' dis'' a' >  |
%% 5
                < g'' e'' b' > 2 < fis'' d'' a' >  |
                < e'' c'' g' > 2 < fis'' dis'' b' a' >  |
                < e'' g'' b'' > 2 < a'' fis'' d'' >  |
                < g'' e'' c'' > 2 < a'' fis'' dis'' b' >  |
                < e'' b' g' e' > 1  |
                \bar "|."
            } % Voice
        >> % Staff
