A = "A"
U = "U"
G = "G"
C = "C"

aa_display_info = {
    "H": [{'Side chain':'Imidazole'}, {'Charge':'Positive'}, {'Hydropathy':'Moderate'}],
    "Q": [{ 'Side chain': 'Amide'}, {'Charge': 'Neutral'}, {'Hydropathy': 'Hydrophilic'} ],
    "P": [{ 'Side chain': 'Cyclic imido group'}, {'Charge': 'Neutral'}, {'Hydropathy': 'Hydrophobic' }],
    "R": [{ 'Side chain': 'Basic'}, {'Charge': 'Positive'}, {'Hydropathy': 'Hydrophilic' }],
    "L": [{ 'Side chain': 'Aliphatic' }, {'Charge': 'Neutral'}, {'Hydropathy': 'Hydrophobic' }],
    "D": [{ 'Side chain': 'Acidic'}, {'Charge': 'Negative'}, {'Hydropathy': 'Hydrophilic' }],
    "E": [{ 'Side chain': 'Acidic'}, {'Charge': 'Negative'}, {'Hydropathy': 'Hydrophilic' }],
    "A": [{ 'Side chain': 'Aliphatic'}, {'Charge': 'Neutral'}, {'Hydropathy': 'Hydrophobic' }],
    "G": [{ 'Side chain': 'Simple'}, {'Charge': 'Neutral'}, {'Hydropathy': 'Hydrophobic' }],
    "V": [{ 'Side chain': 'Aliphatic'}, {'Charge': 'Neutral'}, {'Hydropathy': 'Hydrophobic' }],
    "Y": [{ 'Side chain': 'Aromatic'}, {'Charge': 'Neutral'}, {'Hydropathy': 'Hydrophobic' }],
    '*': [{'Stop codon':'Terminates translation'}],
    "S": [{ 'Side chain': 'Hydroxyl'}, {'Charge': 'Neutral'}, {'Hydropathy': 'Hydrophilic' }],
    "C": [{ 'Side chain': 'Sulfahydryl'}, {'Charge': 'Neutral'}, {'Hydropathy': 'Moderate' }],
    "W": [{ 'Side chain': 'Aromatic'}, {'Charge': 'Neutral'}, {'Hydropathy': 'Hydrophobic' }],
    "F": [{ 'Side chain': 'Aromatic'}, {'Charge': 'Neutral'}, {'Hydropathy': 'Hydrophobic' }],
    "N": [{ 'Side chain': 'Amide'}, {'Charge': 'Neutral'}, {'Hydropathy': 'Hydrophilic' }],
    "K": [{ 'Side chain': 'Basic'}, {'Charge': 'Positive'}, {'Hydropathy': 'Hydrophilic' }],
    "T": [{ 'Side chain': 'Hydroxyl'}, {'Charge': 'Neutral'}, {'Hydropathy': 'Hydrophilic' }],
    "I": [{ 'Side chain': 'Aliphatic'}, {'Charge': 'Neutral'}, {'Hydropathy': 'Hydrophobic' }],
    "M": [{ 'Side chain': 'Sulfahydryl'}, {'Charge': 'Neutral'}, {'Hydropathy': 'Moderate' }]
}
aa = [
    { "full": 'Histidine', "abbr": 'His', "letter": 'H', "count": 2, "b1": 'C', "b2": 'A', "b3": 'TC', "display_info":aa_display_info['H'] },
    { "full": 'Glutamine', "abbr": 'Gln', "letter": 'Q', "count": 2, "b1": 'C', "b2": 'A', "b3": 'AG', "display_info": aa_display_info['Q'] },
    { "full": 'Proline', "abbr": 'Pro', "letter": 'P', "count": 4, "b1": 'C', "b2": 'C', "b3": 'ACTG', "display_info": aa_display_info['P'] },
    { "full": 'Arginine', "abbr": 'Arg', "letter": 'R', "count": 4, "b1": 'C', "b2": 'G', "b3": 'ACTG', "display_info": aa_display_info['R'] },
    { "full": 'Leucine', "abbr": 'Leu', "letter": 'L', "count": 4, "b1": 'C', "b2": 'T', "b3": 'ACTG', "display_info": aa_display_info['L'] },

    { "full": 'Aspartic acid', "abbr": 'Asp', "letter": 'D', "count": 2, "b1": 'G', "b2": 'A', "b3": 'TC', "display_info": aa_display_info['D'] },
    { "full": 'Glutamic acid', "abbr": 'Glu', "letter": 'E', "count": 2, "b1": 'G', "b2": 'A', "b3": 'AG', "display_info": aa_display_info['E'] },
    { "full": 'Alanine', "abbr": 'Ala', "letter": 'A', "count": 4, "b1": 'G', "b2": 'C', "b3": 'ACTG', "display_info": aa_display_info['A'] },
    { "full": 'Glycine', "abbr": 'Gly', "letter": 'G', "count": 4, "b1": 'G', "b2": 'G', "b3": 'ACTG', "display_info": aa_display_info['G'] },
    { "full": 'Valine', "abbr": 'Val', "letter": 'V', "count": 4, "b1": 'G', "b2": 'T', "b3": 'ACTG', "display_info": aa_display_info['V'] },

    { "full": 'Tyrosine', "abbr": 'Tyr', "letter": 'Y', "count": 2, "b1": 'T', "b2": 'A', "b3": 'TC', "display_info": aa_display_info['Y'] },
    { "full": 'Stop', "abbr": 'STP', "letter": '*', "count": 2, "b1": 'T', "b2": 'A', "b3": 'AG', "display_info": aa_display_info['*'] },
    { "full": 'Serine', "abbr": 'Ser', "letter": 'S', "count": 4, "b1": 'T', "b2": 'C', "b3": 'ACTG', "display_info": aa_display_info['S'] },
    { "full": 'Cystine', "abbr": 'Cys', "letter": 'C', "count": 2, "b1": 'T', "b2": 'G', "b3": 'TC', "display_info": aa_display_info['C'] },
    { "full": 'Stop', "abbr": 'STP', "letter": '*', "count": 1, "b1": 'T', "b2": 'G', "b3": 'A', "display_info": aa_display_info['*'] },
    { "full": 'Tryptophan', "abbr": 'Trp', "letter": 'W', "count": 1, "b1": 'T', "b2": 'G', "b3": 'G', "display_info": aa_display_info['W'] },
    { "full": 'Phenylalanine', "abbr": 'Phe', "letter": 'F', "count": 2, "b1": 'T', "b2": 'T', "b3": 'CT', "display_info": aa_display_info['F'] },
    { "full": 'Leucine', "abbr": 'Leu', "letter": 'L', "count": 2, "b1": 'T', "b2": 'T', "b3": 'AG', "display_info": aa_display_info['L'] },

    { "full": 'Asparagine', "abbr": 'Asn', "letter": 'N', "count": 2, "b1": 'A', "b2": 'A', "b3": 'TC', "display_info": aa_display_info['N'] },
    { "full": 'Lysine', "abbr": 'Lys', "letter": 'K', "count": 2, "b1": 'A', "b2": 'A', "b3": 'AG', "display_info": aa_display_info['K'] },
    { "full": 'Threonine', "abbr": 'Thr', "letter": 'T', "count": 4, "b1": 'A', "b2": 'C', "b3": 'ACTG', "display_info": aa_display_info['T'] },
    { "full": 'Serine', "abbr": 'Ser', "letter": 'S', "count": 2, "b1": 'A', "b2": 'G', "b3": 'CT', "display_info": aa_display_info['S'] },
    { "full": 'Arginine', "abbr": 'Arg', "letter": 'R', "count": 2, "b1": 'A', "b2": 'G', "b3": 'AG', "display_info": aa_display_info['R'] },
    { "full": 'Isoleucine', "abbr": 'Ile', "letter": 'I', "count": 3, "b1": 'A', "b2": 'T', "b3": 'ACT', "display_info": aa_display_info['I'] },
    { "full": 'Methionine', "abbr": 'Met', "letter": 'M', "count": 1, "b1": 'A', "b2": 'T', "b3": 'G', "display_info": aa_display_info['M'] },
]

def IS(nct):
    for i in range(len(aa)):
        v = aa[i]
        bs = ["b1", "b2", "b3"]
        is_match = True
        for i_b in range(len(bs)):
            b = bs[i_b]
            if not nct[i_b] in v[b]:
                is_match = False
                break
        if is_match:
            print("Full:   " + v["full"])
            print("Abbr:   " + v["abbr"])
            print("Letter: " + v["letter"])


while True:
    is_valid = False
    while not is_valid:
        ncts = input("\nNucleotides: ").upper()
        is_valid = True
        if len(ncts) != 3:
            print("Invalid number of nucleotides. Requires 3.")
            is_valid = False
        else:
            for i_letter in range(len(ncts)):
                letter = ncts[i_letter]
                if not (letter in "AUGC"):
                    print("Invalid nucleotide: " + letter)
                    is_valid = False
                    break;
        IS(ncts)
# https://github.com/pearcetm/jscodonwheel