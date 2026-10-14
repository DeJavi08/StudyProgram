import Container from 'react-bootstrap/Container';
import Accordion from 'react-bootstrap/Accordion';

const faqData = [
  {
    id: '0',
    question: 'Berapa lama estimasi pengerjaan sebuah proyek web atau aplikasi?',
    answer: 'Waktu pengerjaan tergantung pada kompleksitas fitur dan skala proyek. Untuk landing page atau company profile standar biasanya memerlukan waktu 1-2 minggu. Sementara untuk web app kompleks atau aplikasi mobile (Flutter) berkisar antara 4-8 minggu.'
  },
  {
    id: '1',
    question: 'Apakah source code dan aset sepenuhnya menjadi milik klien?',
    answer: 'Ya, 100%. Setelah seluruh proses pelunasan selesai, repositori source code, akses server, database, serta seluruh aset desain akan diserahkan sepenuhnya kepada pihak klien.'
  },
  {
    id: '2',
    question: 'Bagaimana dengan garansi dan pemeliharaan setelah website/aplikasi rilis?',
    answer: 'Setiap proyek yang kami kerjakan mendapatkan garansi bebas bug (maintenance support) selama 1-3 bulan pertama setelah peluncuran. Kami juga menyediakan paket retain bulanan jika Anda membutuhkan pemeliharaan berkelanjutan.'
  },
  {
    id: '3',
    question: 'Apakah AHA TECH juga membantu konfigurasi server, domain, dan hosting/VPS?',
    answer: 'Tentu. Tim DevOps kami akan menangani setup domain kustom, sertifikat SSL, konfigurasi server Linux/VPS, hingga integrasi pipeline deployment CI/CD agar website dapat berjalan stabil dan aman.'
  },
  {
    id: '4',
    question: 'Bagaimana alur dan skema pembayaran proyek?',
    answer: 'Pembayaran biasanya dilakukan bertahap berbasis milestone: DP (Down Payment) di awal untuk tahap desain & prototyping, termin pertengahan saat proses development selesai, dan pelunasan akhir setelah user testing (UAT) serta siap live.'
  }
];

function AppFaq() {
  return (
    <section id="faq" className="block faq-block">
      <Container>
        <div className="title-holder">
          <h2>FAQ</h2>
          <div className="subtitle">pertanyaan yang sering diajukan seputar layanan kami</div>
        </div>
        <Accordion defaultActiveKey="0" flush>
          {faqData.map(item => {
            return (
              <Accordion.Item eventKey={item.id} key={item.id}>
                <Accordion.Header>
                  <strong>{item.question}</strong>
                </Accordion.Header>
                <Accordion.Body>
                  {item.answer}
                </Accordion.Body>
              </Accordion.Item>
            );
          })}
        </Accordion>
      </Container>
    </section>
  );
}

export default AppFaq;