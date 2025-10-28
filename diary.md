# Project Diary: Comparison of Machine Learning Algorithms
**Student:** [Maciej Roszkowski]
**Supervisor:** [Michail Fasolakis]
**Degree:** BSc Computer Science
**Start Date:** [29 September 2025]

## Week 1 and 2: Project Planning and setup
**Dates:** 29 Sept – 10 Oct
**Activities:**
- Completed project plan including abstract timeline and risks and mitigations section.
- Began background reading — Mitchell (1997), Hastie et al. (2009).
- Setup basic gitlab repository structure as per FYP gitlab rules

**Challenges:**
- Planning the project properly to make sure it is not too basic nor too ambitious

**Resolutions:**
- Decided to make plan our project week by week to ensure project fits college standards

**Next Week Goals:**
- Finalise tech stack
- Finish setting up gitlab repository
- Start research into basic algorithms and datasets

## Week 3 and 4: Tech stack finalisation
**Dates:** 10 Oct – 24 Oct
**Activities:**
- Initialised repository
- Decided to implement algorithms using C++
- Using Cmake for build magement, Catch2 for testing

**Challenges**
- Faced issues configuring Catch2 with CMake — tests weren’t being detected or run properly.

**Resolution**
- Resolved it by learning to use FetchContent in CMake to properly link Catch2 and enable test discovery with include(Catch) and catch_discover_tests().

**Next Week Goals:**
- Finalise basic dataset used
- Implement CI pipeline

**Next Week Goals:**
- Research datasets to use
- Setup CI pipeline
- Setup Cmake and tests in repo

## Week 5 and 6: Tech stack finalisation
[Entry in Progress]
**Dates:** 24 Oct – 7 Nov
**Activities:**
- Decided to use Iris dataset for initial testing and implementation

**Challenges**
- May be issues with non numeric values in dataset (species)

**Resolution**
- Using python to clean dataset (will also be helpful for future use of real world dataset)