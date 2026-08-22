# Practice 6 · Rule engine lite

**Week 06 · Conditionals**  
**Theme:** The program chooses


## Demo video (required)

Paste a link to a short video of you running this assignment (tool + code + run).
Work without a working video link is incomplete.

**Your demo:** _add your link here_


## What to build
A small set of rules — pass / warn / fail, or admit / waitlist / deny. Two or more inputs. A message for every path, including “that’s not in range.”

## Requirements
- ≥2 inputs that change the decision
- A clear outcome for each path
- An invalid / out-of-range branch
- README with a **decision table** (input → result) and a sample run
- Braces on every branch; at least one `&&` or `||`

## Sample session
```
Score: 72
Attendance percent: 90
Result: pass
```

```
Score: 72
Attendance percent: 40
Result: warn — attendance too low
```

```
Score: -3
Attendance percent: 90
Result: invalid score
```

## Starter
`main.cpp` — or continue from the lab.

## Deliverables
1. Course-visible GitHub repo
2. README with decision table + sample runs
3. Short demo video (tool + code + run)
4. Canvas links

## Scope fence
No loops required. No `goto`. No boolean golf.

## Integrity
- AI = tutor, not ghostwriter
- Fake ownership → zero
- Due: Monday night (not Sunday)
- Discussions (every week): first post Friday, replies Sunday
- Late: course policy (−10%/day unless stated otherwise)

## Rubric
Graded on: it runs, it meets the prompt, output is labeled, and the GitHub repo plus demo video are there.

## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o program main.cpp && ./program
```

On Windows (Visual Studio), open `main.cpp` and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, and a real run.
5. Paste the video link in the **Demo video** section above.
6. Submit your fork URL on Canvas.
