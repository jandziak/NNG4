import Game.Levels.Addition
import Game.MyNat.AdvAddition

World "AdvAddition"
Level 5
Title "Arguing backwards"

namespace MyNat

Introduction
"
  In the last level, we manipulated the hypothesis `x + 1 = 4`
  until it became the goal `x = 3`. In this level we'll manipulate
  the goal until it becomes our hypothesis! In other words, we
  will \"argue backwards\".
"

/-- If $x+1=4$ then $x=3$. -/
Statement (x : ℕ) (h : x + 1 = 4) : x = 3 := by
  Hint "Start with `apply succ_inj` to apply `succ_inj` to the *goal*."
  apply succ_inj
  Hint "Applying a proof of $P\\implies Q$ to the *goal* changes $Q$ to $P$.
  Now try `rw [succ_eq_add_one]` to make the goal more like the hypothesis."
  rw [succ_eq_add_one]
  Hint "Now rewrite `four_eq_succ_three` backwards to make the goal
  equal to the hypothesis."
  rw [← four_eq_succ_three]
  Hint "You can now finish with `assumption`."
  assumption

Conclusion "Many people find `apply t at h` easy, but some find `apply t` confusing.
If you find it confusing, then just argue forwards."
