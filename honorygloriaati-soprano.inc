        \context Staff = "track 5" \with { \consists Ambitus_engraver } <<
            \set Staff.instrumentName = "Soprano"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 5" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble"
                \key e \minor
                R1*4  |
%% 5
                r8 b' b' b' a' a' 8. ~ a' 16 g' 8 ~  |
                g' 4 r8 g' fis' 4 d'  |
                e' 2 r  |
                r4 r8 g' fis' 4 g'  |
                g' 1  |
                \bar "|."
            } % Voice
            \lyricsto "voice 5" \new Lyrics \lyricmode {
                 "Ho" "nor" "y" "glo" "ria_a" "ti," "Se" "ñor" "Je" "sús." "...Se" "ñor" "Je" "sús." 
             } % Lyrics
        >> % Staff
