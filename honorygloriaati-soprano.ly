% This LilyPond file was generated by Rosegarden 1.5.1
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	composer = "Alejandro Ibarra"
	copyright = "Copyright © 2004 Alejandro Ibarra"
	title = "Honor y gloria a ti"
	tagline = "Coro Juvenil San Juan Bosco"
	instrument = "Soprano"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
global = {
	\time 4/4
	\skip 1*9  %% 1-9
}
globalTempo = {
	\tempo 4 = 85  \skip 1*9
}
\score {
	\new StaffGroup <<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "honorygloriaati-acordes.inc"
		\include "honorygloriaati-soprano.inc"

	>> % notes

	\layout { }
} % score
